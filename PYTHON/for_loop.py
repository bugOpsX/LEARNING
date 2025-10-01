def iterate_list(nums):
    """
    Iterate over a list and print each element and its square.
    """
    print("Iterating over list and printing square of each:")
    for n in nums:
        print(f"{n} → {n}² = {n * n}")

def iterate_tuple(names):
    """
    Iterate over a tuple of names and greet each name.
    """
    print("\nGreeting names from tuple:")
    for name in names:
        print(f"Hello, {name}!")

def iterate_string(s):
    """
    Iterate over characters in a string and show their positions.
    """
    print("\nIterating over string characters with positions:")
    for idx, ch in enumerate(s):
        print(f"Index {idx}: Character '{ch}'")

def sum_with_range(n):
    """
    Use range() to sum numbers from 1 to n inclusive.
    """
    print(f"\nSumming numbers from 1 to {n}:")
    total = 0
    for i in range(1, n + 1):
        total += i
    print(f"Total sum = {total}")

def nested_loops_example(matrix):
    """
    Demonstrate nested for loops by summing a 2D matrix.
    """
    print("\nSumming elements of a 2D matrix:")
    total = 0
    for row in matrix:
        for val in row:
            total += val
    print("Matrix:", matrix)
    print("Sum of all elements:", total)

def main():
    # Example 1: list iteration
    numbers = [2, 4, 6, 8]
    iterate_list(numbers)

    # Example 2: tuple iteration
    names = ("Alice", "Bob", "Charlie")
    iterate_tuple(names)

    # Example 3: string iteration
    text = "Python"
    iterate_string(text)

    # Example 4: using range to sum
    sum_with_range(10)

    # Example 5: nested loops (matrix)
    mat = [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]
    ]
    nested_loops_example(mat)


if __name__ == "__main__":
    main()
