#include<iostream>
using namespace std;

bool powerOfTwo(int n){
    return n > 0 && (n & (n-1)) == 0;
}int main(){
    cout << powerOfTwo(32);
    return 0;
}
