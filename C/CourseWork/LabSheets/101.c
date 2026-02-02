#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) fact *= i;
    return fact;
}
int main() {
    int choice, n, r, result;
    
    printf("1. Permutation\n");
    printf("2. Combination\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    
    if (choice == 1) {
        result = factorial(n) / factorial(n - r);
        printf("Permutation = %d\n", result);
    } 
    else if (choice == 2) {
        result = factorial(n) / (factorial(r) * factorial(n - r));
        printf("Combination = %d\n", result);
    } 
    else printf("Invalid choice!\n");
    
    return 0;
}
