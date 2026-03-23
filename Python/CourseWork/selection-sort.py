def selection_sort(arr):
    n = len(arr)
    for i in range(n):
        min_index = i
        print(f"\nPass {i+1}:")
        for j in range(i+1, n):
            print(f"Comparing {arr[j]} and {arr[min_index]}")
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]
        print("After swapping:", arr)
    return arr

arr = [11,56,22,50,4,67,46,78,34,23,90,12,45,67,89]
sorted_arr = selection_sort(arr)
print("\nSorted array:", sorted_arr)