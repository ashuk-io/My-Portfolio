#include<iostream>
using namespace std;

int factorial(int n){
    if (n == 0 || n == 1) return 1;
    int fact = 1;
    for (int i = 1 ; i <= n ; i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n = 5;
    cout << factorial(n) << endl;
}