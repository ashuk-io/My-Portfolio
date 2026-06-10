#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int num = 1;
    char ch = 'A';
    //CHARACTER
    for (int i = 0 ; i < n+1 ; i ++ ){
        for (int j = 0 ; j < i ; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    //NUMBER FORWARD LOOP
    // for (int i = 0 ; i < n+1 ; i++){
    //     for ( int j = 0 ; j < i ; j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //NUMBER REVERSE LOOP
    //     for (int j=i+1 ; j > 0 ; j--){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    return 0;
}