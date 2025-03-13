#Create a game where the program randomly picks a number between 1 and 100, and the user has to guess it. After each guess, the program gives hints like "Too High" or "Too Low" until the user gets it right. Show the total attempts at the end.

import random

secret_num = random.randint (1,100)

attempts = 0

print ("Welcome to Guess the Number Challenge!")
print ("I have thought a number Between 1 to 100")

while True:
    guess = int(input("Guess the Number: "))
    attempts += 1

    if guess < secret_num:
        print("Too Low!!")
    elif guess > secret_num:
        print("Too High!!")
    else:
        print(f"You Got that in {attempts} attempts, Congratulations!! ")
        break         
