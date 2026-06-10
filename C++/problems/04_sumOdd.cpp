#include <iostream>
using namespace std;

int main(){
    int N = 50;
    int sum = 0;
    for ( int i = 0 ; i <=N ; i++){
        if (i % 2 != 0){
            sum += i;
        }
    }
    cout << "Sum : " << sum;
    return 0;
}