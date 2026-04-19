#include<stdio.h>
int main(){
    int arr[] = {64, 25, 12, 22, 11, 45, 2,45, 78, 90};
    int min = arr[0];

    for ( int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) - 1 ; i++){
        min = i;
        for ( int j = i + 1 ; j < sizeof(arr)/sizeof(arr[0]) ; j++){
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("Sorted array using selection sort: ");
    for ( int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++) printf("%d ", arr[i]);
    printf("\n");

}