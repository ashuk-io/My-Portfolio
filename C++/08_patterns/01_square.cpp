#include<iostream>

using namespace std;
int main(){
    //CONTINUATION OF NUMBERS
    int n = 3;
    int count = 1;
    for ( int i = 0 ; i < n ; i++){
        
        for ( int j = 0 ; j < n ; j ++ ){
            cout << count<< "  ";
            count++;
        }
        cout << endl;
    }

    //CHARACTERS
    // int n= 4;
    // for (int i = 0 ; i < n ; i++){
    //     char ch = 'A';
    //     for ( int j = 0 ; j < n ; j++){
    //         cout << ch << "  ";
    //         ch = ch + 1 ;
    //     }
    //     cout << endl;    
    // }

    //STAR
    // int n = 5;
    // for ( int i = 1 ; i <= n ; i++){
    //     for ( int j = 1 ; j <= n ; j++){
    //         cout << "*"<< "  ";
    //     }
    //     cout << endl;
    // }
    return 0;
}