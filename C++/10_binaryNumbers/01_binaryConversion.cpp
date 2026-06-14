#include<iostream>
using namespace std;

int toBinary(int decimal){
    if (decimal == 0) return 0;
    int binary = 0;
    int place = 1;

    while (decimal > 0){
        int remainder = decimal%2;     
        decimal /= 2;           
        binary += (remainder * place);
        place *= 10;
    }
    return binary;
}
int main(){
    int decimal = 101;
    cout << toBinary(decimal) << endl;
    return 0;
}