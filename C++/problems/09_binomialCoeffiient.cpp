#include <iostream>
using namespace std;

int factorial( int n){
    if ( n == 0 || n == 1) return 1;
    int fact = 1;
    for ( int i = 1 ; i <= n ; i++){
        fact*=i;
    }
    return fact;
}

int binomialCoefficient(int n , int r){
    if (r > n) return 0;
    return factorial(n)/(factorial(r)*factorial(n-r)); //nCr
}
int main(){
    int n = 8;
    int r = 2;
    cout << "nCr = " << binomialCoefficient(n,r);
}
