#include<stdio.h>

int main() {
    int arr[7];
    for(int i = 0 ; i < 7 ; i++){
        printf("Num%d = ", i+1);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for( int i = 0 ; i < 7 ; i++) {
        if( arr[i] > max) max = arr[i];
    }
    printf("\n Maximum number = %d", max);
    return 0;
}