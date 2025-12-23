// To sum first n natural numbers using recursion:

#include <stdio.h>
int sum(int);
int sum(int n)
{
    
    if (n == 1)
    {
        return 1;
    }
    
    return sum(n-1) + n;

}

int main()
{
    int x;
    printf("Enter a first n nmuber to be summed :");
    scanf("%d", &x);
    printf("The sum is : %d",sum(x));
    return 0;
}