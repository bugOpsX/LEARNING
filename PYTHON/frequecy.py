user_input = input("Enter elements separated by spaces: ")

items = user_input.split()

frequency = {}

for item in items:
    if item in frequency:
        frequency[item] += 1  
    else:
        frequency[item] = 1   

print("\nFrequency of each element:")
for key, value in frequency.items():
    if value == 1:
        print(f"{key} -> {value} time")
    else:
        print(f"{key} -> {value} times")
