# encrypt.py
import os
from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes
from cryptography.hazmat.primitives.asymmetric import padding
from cryptography.hazmat.primitives import hashes, serialization, hmac

def main():
    # Load Bob's public key
    with open("bob_public.pem", "rb") as f:
        public_key = serialization.load_pem_public_key(f.read())

    # Load plaintext
    with open("secret.txt", "rb") as f:
        plaintext = f.read()

    # Generate AES, HMAC keys and IV
    aes_key = os.urandom(32)    # AES-256
    hmac_key = os.urandom(32)   # HMAC-SHA256
    iv = os.urandom(16)         # AES-CTR IV

    # Encrypt with AES-CTR
    cipher = Cipher(algorithms.AES(aes_key), modes.CTR(iv))
    encryptor = cipher.encryptor()
    ciphertext = encryptor.update(plaintext) + encryptor.finalize()

    # Compute HMAC over (IV || ciphertext)
    h = hmac.HMAC(hmac_key, hashes.SHA256())
    h.update(iv + ciphertext)
    tag = h.finalize()

    # Build key bundle: AES || HMAC || IV
    key_bundle = aes_key + hmac_key + iv

    # Wrap key bundle with RSA-OAEP
    wrapped = public_key.encrypt(
        key_bundle,
        padding.OAEP(
            mgf=padding.MGF1(algorithm=hashes.SHA256()),
            algorithm=hashes.SHA256(),
            label=None
        )
    )

    # Save outputs
    with open("ciphertext.bin", "wb") as f:
        f.write(iv + ciphertext)

    with open("tag.bin", "wb") as f:
        f.write(tag)

    with open("wrapped_keys.bin", "wb") as f:
        f.write(wrapped)

    print("[+] Encryption complete.")
    print("[+] Generated ciphertext.bin, tag.bin, wrapped_keys.bin")


if __name__ == "__main__":
    main()
