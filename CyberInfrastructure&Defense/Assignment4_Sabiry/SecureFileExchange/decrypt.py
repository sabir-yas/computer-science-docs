# decrypt.py
from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes
from cryptography.hazmat.primitives.asymmetric import padding
from cryptography.hazmat.primitives import serialization, hashes, hmac

def main():
    # Load Bob’s private key
    with open("bob_private.pem", "rb") as f:
        private_key = serialization.load_pem_private_key(f.read(), password=None)

    # Load encrypted components
    with open("wrapped_keys.bin", "rb") as f:
        wrapped_keys = f.read()

    with open("ciphertext.bin", "rb") as f:
        data = f.read()
        iv = data[:16]
        ciphertext = data[16:]

    with open("tag.bin", "rb") as f:
        tag = f.read()

    # Unwrap key bundle using RSA-OAEP
    try:
        key_bundle = private_key.decrypt(
            wrapped_keys,
            padding.OAEP(
                mgf=padding.MGF1(algorithm=hashes.SHA256()),
                algorithm=hashes.SHA256(),
                label=None
            )
        )
    except Exception:
        print("[!] RSA unwrap failed — wrong key?")
        return

    aes_key = key_bundle[:32]
    hmac_key = key_bundle[32:64]
    iv_check = key_bundle[64:]

    # Sanity check
    if iv_check != iv:
        print("[!] IV mismatch — something is wrong.")
        return

    # Verify HMAC
    h = hmac.HMAC(hmac_key, hashes.SHA256())
    h.update(iv + ciphertext)
    try:
        h.verify(tag)
    except Exception:
        print("[!] Integrity check failed! Ciphertext was tampered with.")
        return

    # Decrypt with AES-CTR
    cipher = Cipher(algorithms.AES(aes_key), modes.CTR(iv))
    decryptor = cipher.decryptor()
    plaintext = decryptor.update(ciphertext) + decryptor.finalize()

    with open("decrypted.txt", "wb") as f:
        f.write(plaintext)

    print("[+] Decryption successful — plaintext saved to decrypted.txt")

if __name__ == "__main__":
    main()
