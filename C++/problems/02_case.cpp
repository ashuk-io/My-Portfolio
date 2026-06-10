//To check if a character is uppercase or lowercase 
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character : ";
    cin >> ch;
    if ((ch >= 'a') && (ch <= 'z')){
        cout << "Lowercase Character ";
    } else if ((ch >= 'A') && (ch <= 'Z')){
        cout << "Uppercase Character ";
    }
    return 0;
}