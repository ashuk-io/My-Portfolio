// To print a pattern for n ines

#include <stdio.h>
int main()
{
    int n = 3;
    // This for loop prints the code upto 3 lines
    for (int i = 0; i <= n; i++)
    {

        // This is for loop prints 2n-1 stars
        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }
        // This prints in a new line
        printf("\n");
    }
    return 0;
}

