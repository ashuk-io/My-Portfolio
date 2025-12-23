#include<stdio.h>

//function prototype

int sum(int, int); 

// function definition
int sum(int x, int y){
    printf("Sum is: %d\n", x+y);
    // return x+y;
}
int main(){
    int a = 5, b = 10;
    sum(a,b); // function call

    int a1 = 20, b1 = 30;
    sum(a1,b1); // function call

    int a2 = 100, b2 = 200;
    sum(a2,b2); // function call

    sum(7, 8); // function call with direct values
    int c = sum(b,a1);// function call with expression
    sum(b2,c);

    return 0;
    
}
