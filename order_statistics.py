import random

# Helper function to partition the array
def partition(arr, low, high):
    pivot = arr[high]
    i = low - 1
    for j in range(low, high):
        if arr[j] <= pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
    arr[i+1], arr[high] = arr[high], arr[i+1]
    return i+1

# Function to find the ith order statistic (i-th smallest element)
def quick_select(arr, low, high, i):
    if low == high:
        return arr[low]
    
    pivot_index = partition(arr, low, high)
    
    # Number of elements in the left side of the pivot
    k = pivot_index - low + 1
    
    if i == k:  # Pivot value is the i-th smallest element
        return arr[pivot_index]
    elif i < k:
        return quick_select(arr, low, pivot_index - 1, i)
    else:
        return quick_select(arr, pivot_index + 1, high, i - k)

# Example usage
arr = [12, 3, 5, 7, 4, 19, 26]
i = 3  # Find the 3rd smallest element
ith_smallest = quick_select(arr, 0, len(arr) - 1, i)
print(f"The {i}-th smallest element is {ith_smallest}")
