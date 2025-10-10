import random

def is_sorted(arr):
    """Check if the list is sorted in ascending order."""
    for i in range(len(arr) - 1):
        if arr[i] > arr[i + 1]:
            return False
    return True

def bogosort(arr):
    """Bogosort algorithm: shuffle until sorted."""
    attempts = 0
    while not is_sorted(arr):
        random.shuffle(arr)
        attempts += 1
    print(f"Sorted after {attempts} shuffles!")
    return arr

# Example usage
numbers = [3, 1, 4, 2, 5]
print("Original:", numbers)
sorted_numbers = bogosort(numbers)
print("Sorted:  ", sorted_numbers)
