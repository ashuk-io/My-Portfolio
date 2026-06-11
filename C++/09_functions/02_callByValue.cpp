#include <iostream>
using namespace std;

int change(int a , int b){
    a+=10;
    b+=10;
    return a+b;
}
int main(){
    int a = 4;
    int b = 5;
    cout << "Sum is : " << change(a,b) << endl;
    cout << a <<" " << b;

    return 0;
}