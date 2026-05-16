# keygen.py
from cryptography.hazmat.primitives.asymmetric import rsa
from cryptography.hazmat.primitives import serialization

def main():
    key = rsa.generate_private_key(
        public_exponent=65537,
        key_size=2048
    )

    # Save private key
    with open("bob_private.pem", "wb") as f:
        f.write(
            key.private_bytes(
                encoding=serialization.Encoding.PEM,
                format=serialization.PrivateFormat.PKCS8,
                encryption_algorithm=serialization.NoEncryption()
            )
        )

    # Save public key
    public_key = key.public_key()
    with open("bob_public.pem", "wb") as f:
        f.write(
            public_key.public_bytes(
                encoding=serialization.Encoding.PEM,
                format=serialization.PublicFormat.SubjectPublicKeyInfo
            )
        )

    print("[+] Generated bob_public.pem and bob_private.pem")

if __name__ == "__main__":
    main()
