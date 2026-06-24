#include<iostream>
using namespace std;

void primeRange( int m , int n){
    for ( int i = m ; i <= n ; i++){
        if (i < 2) continue;
        bool isPrime = true;
        for ( int j = 2 ; j*j <= i ; j++){
            if ( i % j == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime) cout << i << " ";
    }
}

int main() {
    int m = 2;
    int n = 50;
    primeRange(m,n);
    return 0;
}