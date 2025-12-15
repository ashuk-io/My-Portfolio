#include<stdio.h>
int main() {
    int data[5] = {45,72,29,90,61};
    int max = data[0];
    for ( int i = 0 ; i <= 5 ; i++){
        if(data[i] > max ){
            max = data[i];
        }
        else continue;
    }
    printf("Maximum = %d", max);
        return 0;
}