#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

// Function to encrypt a string using Caesar cipher
string encrypt(string text, int shift) {
    string result = "";
    for (char& c : text) {
        if (isalpha(c)) {
            char shifted = c + shift;
            if (isupper(c)) {
                if (shifted > 'Z') shifted -= 26;
                else if (shifted < 'A') shifted += 26;
            } else {
                if (shifted > 'z') shifted -= 26;
                else if (shifted < 'a') shifted += 26;
            }
            result += shifted;
        } else {
            result += c;
        }
    }
    return result;
}

// Function to decrypt a string using Caesar cipher
string decrypt(string text, int shift) {
    return encrypt(text, -shift);
}

int main() {
    string filename;
    cout<<"Enter file name to encrypt/decrypt: ";
    cin>>filename;

    ifstream file_in(filename);
    if (!file_in) {
        cout<<"Error opening file " << filename << endl;
        return 1;
    }

    ofstream file_out("encrypted_" + filename);

    int shift;
    cout<<"Enter the shift value for encryption/decryption: ";
    cin>>shift;

    string line;
    while (getline(file_in, line)) {
        string encrypted_line = encrypt(line, shift);
        file_out << encrypted_line << endl;
    }

    file_in.close();
    file_out.close();

    cout<<"File encrypted/decrypted successfully." << endl;

    return 0;
}
