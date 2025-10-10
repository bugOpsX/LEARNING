import random

def random_joke():
    jokes = [
        "Why did the scarecrow win an award? Because he was outstanding in his field! 🌾😂",
        "Why don’t scientists trust atoms? Because they make up everything! ⚛️🤣",
        "Why did the math book look sad? Because it had too many problems. 📚😢",
        "Why did the chicken join a band? Because it had the drumsticks! 🥁🐔",
        "I told my computer I needed a break, and it said: 'No problem, I’ll go to sleep!' 💻😴"
    ]
    
    print("🤖 Here's a joke for you:")
    print(random.choice(jokes))

if __name__ == "__main__":
    while True:
        input("Press Enter to get a new joke... 😎")
        random_joke()
        print("-" * 50)  # Separator between jokes
