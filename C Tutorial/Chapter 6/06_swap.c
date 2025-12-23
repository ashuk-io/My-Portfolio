#include <stdio.h>

void swap(int* , int* );
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main ()
{
   int  a = 4;int b = 8; swap(&a, &b);
   printf("%d %d", a,b);
   return 0;
}