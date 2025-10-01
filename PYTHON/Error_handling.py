def divide_numbers(a, b):
    """
    Divide a by b, handling ZeroDivisionError.
    """
    try:
        result = a / b
    except ZeroDivisionError: 
        print("Error: Cannot divide by zero!")
        return None
    else:
        print(f"Result of {a} / {b} = {result}")
        return result
    # (no finally here)

def parse_int(s):
    """
    Convert a string to integer, handling ValueError.
    """
    try:
        num = int(s)
    except ValueError:
        print(f"Error: '{s}' is not a valid integer.")
        return None
    else:
        print(f"Successfully parsed integer: {num}")
        return num

def read_file(filepath):
    """
    Read a file, handling FileNotFoundError, and show finally block.
    """
    file = None
    try:
        file = open(filepath, 'r')
        data = file.read()
        print(f"Contents of '{filepath}':\n{data}")
        return data
    except FileNotFoundError:
        print(f"Error: File '{filepath}' not found.")
        return None
    finally:
        if file:
            file.close()
            print(f"File '{filepath}' has been closed (in finally block).")

def main():
    print("=== Test divide_numbers ===")
    divide_numbers(10, 2)     # valid
    divide_numbers(5, 0)      # division by zero

    print("\n=== Test parse_int ===")
    parse_int("123")          # valid
    parse_int("abc")          # invalid

    print("\n=== Test read_file ===")
    # Create a test file name that likely exists or not
    existing = "example.txt"
    nonexisting = "nonexistent_file.txt"

    # For demonstration, you may want to create example.txt manually before running
    read_file(existing)
    read_file(nonexisting)

if __name__ == "__main__":
    main()
