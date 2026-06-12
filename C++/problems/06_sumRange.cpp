#include <iostream>
using namespace std;

int sumRange(int a, int b){
    int sum = 0;
    for ( int i = a ; i <= b ; i++){
        sum = sum + i;
    }
    return sum;
}
int main(){
    cout << sumRange(10,100) << endl;
}