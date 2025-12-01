#include <stdio.h>

int main() {
    int n, i, j;
    
    // The user enters the size of the diamond (half the height)
    printf("Enter the size (number of rows for the top half): ");
    scanf("%d", &n);

    // --- Part 1: Upper Pyramid (The Top Half) ---
    for (i = 1; i <= n; i++) {
        // Print leading SPACES
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print STARS
        for (j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // --- Part 2: Lower Inverted Pyramid (The Bottom Half) ---
    // Start from the second-to-last row of the top part (n-1) and go down to 1
    for (i = n - 1; i >= 1; i--) { 
        // Print leading SPACES
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print STARS
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
