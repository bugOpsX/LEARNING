#Create a Python program that takes two simple integer numbers from the user and performs these operations: Addition, Subtraction, Multiplication, Division, Modulus (remainder), Exponentiation (power)

num1 = int(input("Enter First Number: "))
num2 = int(input("Enter Second Number: "))

operation = input("Choose Operator: +, -, *, /, mod, expo: ")

if operation == "+":
    result = num1+num2
elif operation == "-":
    result = num1-num2
elif operation == "*":
    result = num1*num2
elif operation == "mod":   
    result = num1%num2 
elif operation == "expo":
    result =  num1**num2   
elif operation == "/":
    if num2 != 0:
        result = num1/num2
    else:
        print("Error! Division with Zero.")
else:
    result = "Invalid Operation!"    

print("Result: ",result)    

       
