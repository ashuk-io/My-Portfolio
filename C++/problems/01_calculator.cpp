#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    char op;
    cout << "Number 1 : " << endl;
    cin >> num1;
    cout << "Number 2 : " << endl;
    cin >> num2;
    cout << "Operation : " << endl;
    cin >> op;
    if (op == '+') {
        cout << "=" << num1 + num2 << endl;
    }
    else if ( op == '-' ) {
        cout << "=" << num1 - num2 << endl;
    }
    else if ( op == '*' ) {
        cout << "=" << num1 * num2 << endl;
    }
    else if ( op == '/' ) {
        cout << "=" << num1 / num2 << endl;
    }
    else {
        cout << "Invalid Operation!" << endl;
    }
    return 0;
}