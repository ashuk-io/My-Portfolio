#include<iostream>
using namespace std;
int main(){
    int arr[] = {34,75,23,76,11,69};
    int smallestInt = arr[0];
    for ( int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++){
        smallestInt = min(smallestInt , arr[i]);
    }
    cout << "Smallest Integer : " << smallestInt << endl;
    return 0;
}