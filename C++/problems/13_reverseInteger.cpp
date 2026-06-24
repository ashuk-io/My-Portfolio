#include<iostream>
using namespace std;

int reverseInteger( int integer){
    bool isNegative = integer < 0;
    int digits;
    int remainder;
    int reverseInt = 0;
    while( integer > 0 ){
        digits = integer%10;
        integer /= 10;
        reverseInt = reverseInt*10 + digits ;
    }
    return reverseInt;
}

int main()
{
    cout << reverseInteger(23412);
}