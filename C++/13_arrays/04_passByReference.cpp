#include<iostream>
using namespace std;

void changeArr(int arr[] , int size){
    cout << "In function:\n";
    for ( int i = 0 ; i < size ; i ++ ){
        arr[i] = 2*arr[i];
    }
}
int main(){
    int arr[] = {34,75,23,76,11,69};
    changeArr(arr, 5);
    cout << "In main:\n";
    for ( int i = 0 ; i < 5 ; i ++ ){
        cout << arr[i] << " ";  
    }
    cout << endl;
    return 0;
}