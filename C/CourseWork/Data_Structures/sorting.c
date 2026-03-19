#include<stdio.h>

void sort(int arr[], int size) {
    for (int i = 0 ; i <size - 1 ; i++){
        for ( int j = 0 ; j < size - 1 ; j++){
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0 ; i < size ; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// int main(){
//     int arr[] = {5, 2, 9, 1, 6, 3, 4, 8, 7};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     printArray(arr, size);
//     sort(arr, size);
//     printf("Sorted array: ");
//     printArray(arr, size);

//     return 0;
// }

void arrange(int arr[] , int size ){
    int temp = 0;
    for ( int i = 0 ; i < size - 1 ; i++){
        for ( int j = 0 ; j < size - 1 ; j++){
        if ( arr[j] < arr[j+1]){
            temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
    }
}
}

int main(){
    int arr[] = {5, 2, 9, 1, 6, 3, 4, 8, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    arrange(arr, size);
    printf("Sorted array: ");
    printArray(arr, size);
    return 0;
}
    
