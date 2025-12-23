//Convert Celsius to Fahrenheit:

#include<stdio.h>
int convert(int);
int convert(int c){
    int far = (c * 9/5) + 32;
    printf("The temperature in Fahrenheit is %d\n", far);
}

int main(){
    int temp;
    printf("Enter temperature in Celsius: \n");
    scanf("%d", &temp);
    convert(temp);
    return 0;
}