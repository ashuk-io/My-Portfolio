#include<stdio.h>
int main() { 
    int a[5];
    int n;
    printf("Enter number to finf :\n");
    scanf("%d", &n);
    for (int i = 0 ; i <5 ; i++) {
        scanf("%d", &a[i]);
        if(a[i]==n){
            printf("Number found", i);
        }
        else{
            printf("Number not found");
        }
    }

    return 0;
}
