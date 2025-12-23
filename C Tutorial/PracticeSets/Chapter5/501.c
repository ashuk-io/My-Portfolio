//Mean of 3 numbers using functions:

#include<stdio.h>
int mean(int,int,int);
int mean(int a, int b, int c){
    int avg = (a+b+c)/3;
    printf("The average of %d, %d and %d is %d\n", a, b, c, avg);
}

int main(){
    int x, y, z;
    printf("Enter three numbers to find their average: \n");
    scanf("%d %d %d", &x, &y, &z);
    mean(x, y, z);
    return 0;
}