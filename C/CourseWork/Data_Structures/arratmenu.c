#include <stdio.h>

#define MAX_SIZE 100

void insert(int arr[], int *n, int pos, int item) {
    if (*n >= MAX_SIZE) {
        printf("Array is full. Cannot insert!\n");
        return;
    }

    for (int j = *n - 1; j >= pos; j--) {
        arr[j + 1] = arr[j];
    }
    arr[pos] = item;
    (*n)++;
    printf("Item inserted!\n");
}

void deleteItem(int arr[], int *n, int pos) {
    for (int j = pos; j < *n - 1; j++) {
        arr[j] = arr[j + 1];
    }
    (*n)--;
    printf("Item deleted!\n");
}

int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;
        }
    }
    return 1;
}

void linearSearch(int arr[], int n, int item) {
    int loc = -1;
    for (int k = 0; k < n; k++) {
        if (arr[k] == item) {
            loc = k;
            break;
        }
    }
    if (loc == -1) printf("Item not found.\n");
    else printf("Item found at index %d.\n", loc);
}

void binarySearch(int arr[], int n, int item) {
    int beg = 0, end = n - 1, mid, loc = -1;
    while (beg <= end) {
        mid = (beg + end) / 2;
        if (arr[mid] == item) {
            loc = mid;
            break;
        } else if (item < arr[mid]) {
            end = mid - 1;
        } else {
            beg = mid + 1;
        }
    }
    if (loc == -1) printf("Item not found.\n");
    else printf("Item found at index %d.\n", loc);
}

void display(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5, choice, pos, item;

    while (1) {
        printf("\n--- Array Operations Menu ---\n");
        printf("1. Insert\n2. Delete\n3. Linear Search\n4. Binary Search\n5. Display\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter index to insert (0 to %d) and item: ", n);
                scanf("%d %d", &pos, &item);
                if (pos >= 0 && pos <= n) insert(arr, &n, pos, item);
                else printf("Invalid index!\n");
                break;
            case 2:
                printf("Enter index to delete (0 to %d): ", n - 1);
                scanf("%d", &pos);
                if (pos >= 0 && pos < n) deleteItem(arr, &n, pos);
                else printf("Invalid index!\n");
                break;
            case 3:
                printf("Enter item to search: ");
                scanf("%d", &item);
                linearSearch(arr, n, item);
                break;
            case 4:
                printf("Enter item to search (Array must be sorted!): ");
                scanf("%d", &item);
                if (isSorted(arr, n)) {
                    binarySearch(arr, n, item);
                } else {
                    printf("Array is not sorted. Use Linear Search or keep array sorted.\n");
                }
                break;
            case 5:
                display(arr, n);
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}