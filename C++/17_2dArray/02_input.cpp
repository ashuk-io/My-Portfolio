#include<iostream>
using namespace std;

int main(){
    int rows;
    int columns;
    cout << "Rows : " << endl;
    cin >> rows;
    cout << "Columns : " << endl;
    cin >> columns;

    int m[rows][columns];
    for ( int i = 0 ; i < rows ; i++){
        for ( int j = 0 ; j < columns ; j++){
            cin >> m[i][j];
        }
    }
    for ( int i = 0 ; i < rows ; i++){
        for ( int j = 0 ; j < columns ; j++){
            cout<< m[i][j] << " ";
        }
        cout << endl;
    }
}