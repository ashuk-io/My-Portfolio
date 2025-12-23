#include<stdio.h>
int main()
{
    int a = 7;
    int* i = &a;
    printf("The address of a is %u\n", &a);
    printf("The value at i is %d", *i);
    return 0;
}
    
