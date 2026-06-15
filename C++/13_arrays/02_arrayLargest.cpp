#include<iostream>
using namespace std;
int main(){
    int arr[] = {34,75,23,76,11,69};
    int largestInt = arr[0];
    for(int i=0 ; i < sizeof(arr)/sizeof(int) ; i++){
        largestInt = max(largestInt,arr[i]);
    }
    cout << "Largest Integer : " << largestInt << endl;
    return 0;
}