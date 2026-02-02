#include<stdio.h>
int main(){
    int a[5];
    int temp;
    for (int i = 0 ; i < 5 ; i++) scanf("%d", &a[i]);
    for (int i = 0 ; i < 5 ; i++){
        temp = a[i];
        if (a[i-1]< temp){
            a[i-1] = temp;
        }
        for (int j = 0 ; j <5 ; j++) printf("%d ", a[j]);   
    }
    
    printf("\nSorted array in descending order: ");
    for (int i = 0 ; i <5 ; i++) printf("%d ", a[i]);
    return 0;
}