#include<stdio.h>
int main(){
    int i = 6;
    int* j = & i;
    int** k = &j;
    printf("The of value of i is %d\n", i);
    printf("The of value of i is %p\n", &i);
    printf("The address of i is %p\n", *j);
    printf("The address of j is %p", *k);
    return 0;
}