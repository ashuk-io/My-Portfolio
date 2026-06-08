#include <iostream>
using namespace std;

int main() {
    int a = 10 , b = 8;
    cout << "Sum = " << (a+b) << endl;
    cout << "Difference = " << (b-a) << endl;
    cout << "Product = " << (a*b) << endl;
    cout << "Quotient = " << (a/b) << endl;
    cout << "Division = " << a /(float)b << endl;//Result depends on largest type of operand
    cout << "Remainder/modulo = " << (a&b) << endl;
    
    return 0;
}