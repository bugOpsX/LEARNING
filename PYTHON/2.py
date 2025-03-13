#typecasting from one data type to another: variable = datatype(variable) 

name = "Sumant"
age = 21
gpa = 8.95
is_student = True

print(type(name)) #to check data type
print(type(age)) #check data type
print(type(gpa)) #check data type
print(type(is_student)) #check data type

gpa = int(gpa) #type casting

print (f"GPA: {gpa}") #prints changed datatype value

age = float(age) #type casting
print (f"age: {age}") #prints changes value

age += 1
print(f"Age Next year: {age}")

name  = bool(name)
print(f"Name: {name}")

name2 = "" #variable has no entry
name2 = bool(name2) #can be used to check if someone entered name or not
print(f"Name: {name2}") #prints false

