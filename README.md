# File Encryption & Decryption using Caesar Cipher

This C++ program allows users to encrypt or decrypt text files using the Caesar cipher algorithm. The Caesar cipher shifts each letter in the plaintext by a fixed number of positions down the alphabet.

## Features

- Encrypt text files using a specified shift value.
- Decrypt previously encrypted text files using the same shift value.

## Usage

1. Compile the program using a C++ compiler.
   
   ```bash
   g++ enc.cpp -o enc

3. Run the compiled executable.

   ```bash
   ./enc

4. Enter the name of the file you want to encrypt/decrypt.
5. Enter the shift value for encryption/decryption.
6. The program will create a new file with the encrypted/decrypted content.

## Example

- Suppose you have a text file named plaintext.txt with the following content
  
     ```bash
     Hello, world

- You want to encrypt this file with a shift value of 3. After running the program, the encrypted content will be written to a new file named encrypted_plaintext.txt, which will contain:
  
     ```bash
     Khoor, Zruog!

- To decrypt the file, you would use the same shift value.

### Note

- This program assumes the input file contains only ASCII characters.
- Ensure you have the necessary permissions to read and write files in the directory.

Feel free to adjust the content as needed and add more details or instructions depending on your requirements.
