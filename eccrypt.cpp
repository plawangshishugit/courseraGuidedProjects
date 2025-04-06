#include<iostream>
using namespace std;
int main(){
    char plaintext = 'j';
    char ciphertext;
    char key = 'B';

    ciphertext = (plaintext + key) %20 +65;
    cout << "Ciphertext: " << ciphertext << endl;

}