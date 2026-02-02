#include<stdio.h>

int arr[100], n;

void input() {
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

int sum() {
    int total = 0;
    for(int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

float average() {
    return (float)sum() / n;
}

int min() {
    int minimum = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    return minimum;
}

int max() {
    int maximum = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > maximum) {
            maximum = arr[i];
        }
    }
    return maximum;
}

void display() {
    printf("Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void menu() {
    printf("\n1. Input\n");
    printf("2. Sum\n");
    printf("3. Average\n");
    printf("4. Min\n");
    printf("5. Max\n");
    printf("6. Display\n");
    printf("7. Exit\n");
}

int main() {
    int choice;
    
    while(1) {
        menu();
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if(choice == 1) {
            input();
        } else if(choice == 2) {
            printf("Sum = %d\n", sum());
        } else if(choice == 3) {
            printf("Average = %.2f\n", average());
        } else if(choice == 4) {
            printf("Min = %d\n", min());
        } else if(choice == 5) {
            printf("Max = %d\n", max());
        } else if(choice == 6) {
            display();
        } else if(choice == 7) {
            break;
        } else {
            printf("Invalid choice\n");
        }
    }
    
    return 0;
}
