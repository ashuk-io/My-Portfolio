# include <iostream>
using namespace std;

int main() {
    int a = 7;
    int b = a++; //post increment
    cout << b << endl;
    int c = ++a; //pre increment
    cout << c << endl;

    int d = a--; //post decrement
    cout << d << endl ;
    int e = --a  ; //pre decrement
    cout <<  e << endl;
}