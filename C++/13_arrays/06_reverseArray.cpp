#include<iostream>
using namespace std;
//Two pointer approach

void reverseArray(int arr[] , int size){
    int start = 0;
    int end = size - 1;
    while (start < end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for ( int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    reverseArray(arr,size);
    for ( int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
// void reverseArray(int arr[] , int size){
//     for ( int i = 0 ; i < size/2 ; i++){
//         arr[i] = arr[size - i - 1];
//     }
// }
    return 0;
}