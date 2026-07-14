#include<iostream>
using namespace std;
int main(){
    int m[3][3]{{1,2,3},{4,5,6},{7,8,9}};
    int target = 7;
    for ( int i = 0 ; i < 3 ; i++){
        for ( int j = 0 ; j < 3 ; j++){
            if( target == m[i][j]){
                cout << "[" << i <<","<<j<<"]";
                return 0;
            }
        }
    }
    cout << "Not Found!";
    return 0;
}