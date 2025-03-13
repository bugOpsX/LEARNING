#Create a simple calculator that asks for two numbers and an operation (+, -, *, /) and prints the result.

num1 = int(input("Enter First Number: "))
num2 = int(input("Enter Second Number:"))
operation = input("Choose the operation : (+, -, *, /) ")


if operation == "+":
    result = num1 + num2
    print (f"Sum is: {result}")
elif operation == "*":
    result = num1*num2
    print (f"Product is: {result}")
elif operation == "-":
    result = num1 - num2
    print (f"Difference is: {result}")
elif operation == "/":
    if num2 != 0:
        result = num1/num2
        print (f"Quotient is: {result}")
    else:
        print("Error! division by Zero.")    
    
    
else:
    print(f"Can't Perform!!")   
 

