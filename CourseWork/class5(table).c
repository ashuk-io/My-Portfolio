#include<stdio.h>
int main() {
    int rows = 2, columns = 2;
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int sum[2][2];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of matrices:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("%d ", sum[i][j]);
        }
    
    }

    return 0;
}