# DSA/calculator_functions.py

"""
Simple Calculator Program using Functions

This program performs basic arithmetic operations:
- Addition
- Subtraction
- Multiplication
- Division

Each operation is implemented as a separate function.
The program takes user input for two numbers and the operation to perform.
"""

# Function to add two numbers
def add(num1, num2):
    """Return the sum of num1 and num2."""
    return num1 + num2

# Function to subtract two numbers
def subtract(num1, num2):
    """Return the difference between num1 and num2."""
    return num1 - num2

# Function to multiply two numbers
def multiply(num1, num2):
    """Return the product of num1 and num2."""
    return num1 * num2

# Function to divide two numbers
def divide(num1, num2):
    """
    Return the quotient of num1 divided by num2.
    Raises ZeroDivisionError if num2 is zero.
    """
    if num2 == 0:
        raise ZeroDivisionError("Division by zero is not allowed.")
    return num1 / num2

# Main program execution
if __name__ == "__main__":
    # Take user input
    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))
    operation = input("Enter operation (add/subtract/multiply/divide): ").strip().lower()

    # Perform the selected operation
    if operation == "add":
        result = add(num1, num2)
    elif operation == "subtract":
        result = subtract(num1, num2)
    elif operation == "multiply":
        result = multiply(num1, num2)
    elif operation == "divide":
        try:
            result = divide(num1, num2)
        except ZeroDivisionError as e:
            print(e)
            exit()
    else:
        print("Invalid operation! Please choose from add, subtract, multiply, divide.")
        exit()

    # Display result
    print(f"The result of {operation} is: {result}")
