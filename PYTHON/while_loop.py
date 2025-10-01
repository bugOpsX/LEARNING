def count_up_to(max_num):
    """
    Count from 1 up to max_num (inclusive) using a while loop.
    """
    i = 1
    while i <= max_num:
        print(i, end=" ")
        i += 1
    print()

def count_until_condition(max_num):
    """
    Demonstrate break: stop looping when a condition is met.
    """
    i = 1
    while True:
        if i > max_num:
            break
        print(i, end=" ")
        i += 1
    print()

def skip_even_numbers(limit):
    """
    Demonstrate continue: skip printing even numbers up to limit.
    """
    i = 1
    while i <= limit:
        if i % 2 == 0:
            i += 1
            continue
        print(i, end=" ")
        i += 1
    print()

def find_in_list(target, data_list):
    """
    Use while loop to search for `target` in `data_list`.
    Return index if found, else return -1.
    """
    idx = 0
    while idx < len(data_list):
        if data_list[idx] == target:
            return idx
        idx += 1
    return -1

def main():
    print("Example 1: count_up_to(5):")
    count_up_to(5)          # prints 1 2 3 4 5

    print("\nExample 2: count_until_condition(3):")
    count_until_condition(3)  # prints 1 2 3 using break

    print("\nExample 3: skip_even_numbers(10):")
    skip_even_numbers(10)     # prints only odd numbers: 1 3 5 7 9

    print("\nExample 4: find_in_list")
    fruits = ["apple", "banana", "cherry", "date"]
    target = "cherry"
    pos = find_in_list(target, fruits)
    if pos != -1:
        print(f"Found '{target}' at index {pos}")
    else:
        print(f"'{target}' not found in list")

if __name__ == "__main__":
    main() 
