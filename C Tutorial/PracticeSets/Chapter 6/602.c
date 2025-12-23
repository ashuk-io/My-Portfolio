#include <stdio.h>

void printAddress(int i)
{
    printf("Address of i in function: %p\n", (void *)&i);
}

int main()
{
    int i = 10;
    printf("Address of i in main: %p\n", (void *)&i);
    printAddress(i);
    // The addresses are NOT the same.
    // In main, 'i' is a variable local to main().
    // When passed to the function, a copy of 'i' is made and stored in a new location (function's stack frame).
    // Therefore, their addresses are different.
    return 0;
}