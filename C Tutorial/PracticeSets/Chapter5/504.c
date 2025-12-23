// To find nth number of a fibonacci series using recursion:
#include <stdio.h>
// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);
int fibonacci(int);
int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int n;
    printf("Enter nth element : \n");
    scanf("%d", &n);
    printf("The value of fibonacci at %d is %d :\n", n, fibonacci(n));
    return 0;
}