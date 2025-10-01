
# -------------------------------
# 1. Calculate Average of Numbers
# -------------------------------
numbers = [45, 67, 89, 23, 56]
total = 0

# use a for loop to sum all numbers
for num in numbers:
    total += num

average = total / len(numbers)
print("Numbers:", numbers)
print("Average:", average)


# --------------------------------
# 2. Print Multiplication Table
# --------------------------------
num = 5
print(f"\nMultiplication Table of {num}")
for i in range(1, 11):
    print(f"{num} x {i} = {num * i}")


# --------------------------------
# 3. Sending Messages to People
# --------------------------------
names = ["Alice", "Bob", "Charlie", "Diana"]

print("\nSending messages:")
for name in names:
    print(f"Hello {name}, welcome to the Python Learning Platform!")


# --------------------------------
# 4. Searching for an Item in List
# --------------------------------
fruits = ["apple", "banana", "cherry", "mango", "orange"]
search_item = "cherry"

found = False
i = 0

# while loop to search
while i < len(fruits):
    if fruits[i] == search_item:
        found = True
        break
    i += 1

if found:
    print(f"\n'{search_item}' found in fruits list at position {i}.")
else:
    print(f"\n'{search_item}' not found in fruits list.")
