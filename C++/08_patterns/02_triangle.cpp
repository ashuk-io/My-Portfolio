#include<iostream>
using namespace std;

int main(){
    //NUMBERS2
    int n = 5;
    for ( int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= i ; j ++){
            cout << j << " ";
        }
        cout << endl;
    }
    //CHARACTERS
    // int n = 5;
    // char ch = 'A';
    // for ( int i = 1 ; i <= n ; i ++ ){
    //     for ( int j = 0 ; j < i ; j ++){
    //         cout << ch << " ";
    //     }
    //     ch++;
    //     cout << endl;
    // }
        
    //NUMBERS1
    // int n = 5;
    // for ( int i = 0 ; i < n+1 ; i++){
    //     for ( int j = 0 ; j < i ; j++){
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    //STAR
    // int n = 5;
    // for ( int i = 0 ; i < n ; i ++ ){
    //     for ( int j = 0 ; j <= i ; j++){
    //         cout << '*' << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}