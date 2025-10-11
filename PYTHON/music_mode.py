import random

def mood_music():
    mood_playlists = {
        "happy": [
            "🎶 Happy - Pharrell Williams",
            "🎵 Can't Stop the Feeling - Justin Timberlake",
            "🎶 Walking on Sunshine - Katrina & The Waves"
        ],
        "sad": [
            "🎵 Someone Like You - Adele",
            "🎶 Fix You - Coldplay",
            "🎵 Stay With Me - Sam Smith"
        ],
        "angry": [
            "🎶 Break Stuff - Limp Bizkit",
            "🎵 Killing in the Name - Rage Against The Machine",
            "🎶 Duality - Slipknot"
        ],
        "relaxed": [
            "🎵 Weightless - Marconi Union",
            "🎶 Clair de Lune - Debussy",
            "🎵 Ocean Eyes - Billie Eilish"
        ]
    }

    print("🎧 Welcome to Mood Music Selector!")
    print("Type your mood: happy, sad, angry, relaxed (or 'quit' to exit)")

    while True:
        mood = input("\nWhat's your mood today? ").lower()
        if mood == "quit":
            print("👋 Goodbye! Keep grooving! 🎵")
            break
        elif mood in mood_playlists:
            playlist = random.choice(mood_playlists[mood])
            print(f"🎵 Suggested song for your mood ({mood}): {playlist}")
        else:
            print("❌ Sorry, I don't recognize that mood. Try happy, sad, angry, or relaxed.")

if __name__ == "__main__":
    mood_music()
