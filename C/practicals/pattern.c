#include<stdio.h>

int main() {
    for(int i = 0 ; i < 10 ; i++){
        for ( int j = 0 ; j < 10 - i ; j++){
            printf(" ");
        }
        for ( int j = 0 ; j < i ; j++){
            printf("* ");
        }
        printf("\n");

    }
    for(int i = 10 ; i > 0 ; i--){
        for ( int j = i ; j > i-1  ; j--){
            printf(" ");
        }
        for ( int j = i ; j > i ; j--){
            printf("* ");
        }
        printf("\n");

    }
    return 0;
    
}