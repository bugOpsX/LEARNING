#Create a Python program that:
#Asks the user to enter a number.
#Prints the multiplication table for that number up to users choice.

a= int(input("Enter the Number of which you want Multiplication Table: "))
b = int(input("Upto Which Number: "))

c = 0 #initialize c as 0

print("Multiplication Table :")

while c <= b:
    result = a*c #f-string 
    print (f"{a} * {b} = {result}")
    c += 1 #increment to avoid infinite loop