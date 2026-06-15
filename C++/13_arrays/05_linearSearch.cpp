#include<iostream>
using namespace std;

void search(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            cout << "Target found! Index: " << i << endl;
            return;
        }
    }
    cout << "Target not found!" << endl;
}

int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 8;

    search(arr, size, target);

    return 0;
}