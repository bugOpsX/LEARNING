import os
import time

# Clear console based on OS
def clear_screen():
    os.system('cls' if os.name == 'nt' else 'clear')

# Display array as ASCII bars
def display_array(arr):
    clear_screen()
    for value in arr:
        print("█" * value)
    time.sleep(0.3)

# Bubble Sort Visualization
def bubble_sort_visual(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            display_array(arr)
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    display_array(arr)

# Insertion Sort Visualization
def insertion_sort_visual(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        
        while j >= 0 and arr[j] > key:
            display_array(arr)
            arr[j + 1] = arr[j]
            j -= 1
        
        arr[j + 1] = key
        display_array(arr)
    display_array(arr)

if __name__ == "__main__":
    print("===== Sorting Visualizer (CLI) =====")
    print("1. Bubble Sort")
    print("2. Insertion Sort")
    
    choice = int(input("Choose Sorting Algorithm (1/2): "))
    arr = list(map(int, input("Enter values (e.g. 5 3 8 2 7): ").split()))

    if choice == 1:
        bubble_sort_visual(arr)
    elif choice == 2:
        insertion_sort_visual(arr)
    else:
        print("Invalid choice!")

    print("\n✅ Sorting Completed!")
    time.sleep(2)
