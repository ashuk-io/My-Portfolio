#include<stdio.h>

int sum(int,int);
int sum(int a,int b){
    a = 6; //Sum sunction cant change the value of a bcz it only carries a copy of the original value
    return a+b;
}

int main()
{
    int x = 1; int y = 6;
    printf("The sum is : %d\n", sum(1,6));
    printf("The value of x is %d", x);
    return 0;
}