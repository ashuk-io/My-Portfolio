def binary_search(arr, key):
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        print(f"Low: {low}, High: {high}, Mid: {mid}")
        if arr[mid] == key:
            return mid
        elif arr[mid] < key:
            low = mid + 1
            print("Searching right")
        else:
            high = mid - 1
            print("Searching left")
    return -1

arr = [10,20,30,40,50,60,70]

search = int(input("Enter number to search: "))

result = binary_search(arr, search)
if result == -1:
    print("Element not found in the array.")
else:
    print(f"Element found at index: {result}")
