#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Return the index where element is found
        }
    }
    return -1;  // Return -1 if element is not found
}

int main() {
    int arr[] = {10, 23, 45, 70, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    
    printf("Enter element to search: ");
    scanf("%d", &key);
    
    int result = linearSearch(arr, n, key);
    
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in array\n");
    }
    
    return 0;
}
