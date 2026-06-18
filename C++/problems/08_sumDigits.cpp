#include<iostream>
#include <string>
using namespace std;

int sumDigits(int n){
    int count = 0;
    while (n != 0){
        int digit = n % 10;
        count += digit;
        n /= 10;
    }
    return count;
}
int main(){
    int n = 21;
    cout << sumDigits(n);
    return 0;
}
