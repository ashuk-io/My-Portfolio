def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        print(f"\nPass {i+1}:")
        for j in range(0, n-i-1):
            print(f"Comparing {arr[j]} and {arr[j+1]}")
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]

            else:
                print("No swap needed")

            print("Current array state:", arr)

arr = [5,3,4,1,2,6,10,9,8,80,55,76,34,24,75,85,28]
bubble_sort(arr)
print("\nSorted array:", arr)