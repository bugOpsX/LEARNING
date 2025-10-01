import tkinter as tk
import random
import time
from tkinter import simpledialog, messagebox, ttk

# Sentences for typing
sentences = [
    "In a quiet village nestled between tall mountains, the mornings began with the chirping of birds and the gentle flow of the river that ran through the center. The villagers rose early, tending to their farms and animals before the sun reached its peak. Children would chase each other along the dusty paths, their laughter echoing between the hills. Life moved slowly here, but it was rich with meaning. Every festival brought the community together, celebrating not just tradition but also the joy of shared existence. Evenings were filled with the smell of home-cooked meals, and old stories were passed from one generation to the next. Though modern life crept in slowly with phones and machines, the heart of the village remained untouched — beating with the same rhythm it had for centuries.",
    
    "The ocean stretched endlessly, a canvas of blue painted with strokes of sunlight and clouds. Seagulls cried overhead while waves rolled steadily, crashing onto the sandy shore with hypnotic consistency. A young girl stood at the edge, her toes sinking into the wet sand as the cool water washed over her feet. She stared at the horizon, wondering what lay beyond it — other lands, other lives, other possibilities. Ships passed occasionally, their silhouettes fading into the mist. Shells dotted the beach, remnants of marine life carried by the tide. Each one held a mystery, a fragment of the deep sea’s story. As the wind swept her hair across her face, she closed her eyes and listened. The sea spoke in whispers, telling tales of adventure, storms, and stillness. In that moment, time stood still and she felt as if she were part of something eternal.",
    
    "In the bustling heart of the city, where honking cars and flashing signs created a constant rhythm of noise and motion, there existed a small bookshop tucked between two towering buildings. It was easy to miss, overshadowed by neon lights and loud cafés, but for those who discovered it, it became a place of magic. The scent of old paper and fresh ink welcomed visitors at the door, and creaky wooden floors led them through shelves packed with stories. Some came seeking knowledge, others escape. The owner, an old man with glasses that slipped down his nose, always had a recommendation ready. Children gathered in the afternoons to listen to him read, eyes wide as he brought dragons and distant planets to life. Though the world outside rushed ahead, the bookshop remained a pocket of time, where imagination bloomed and every visit felt like stepping into a dream.",
    
    "The rain started as a soft drizzle, barely noticeable against the heat of the summer day. Gradually, it grew heavier, turning the streets into reflective streams and coating leaves in glistening drops. People rushed for cover, their umbrellas blooming like colorful flowers on a grey canvas. Yet, amidst the commotion, a young man stood still, letting the rain soak through his shirt and hair. It wasn’t sadness or madness — it was peace. He closed his eyes, letting memories drift through his mind, each drop awakening a moment long forgotten. The laughter of old friends, the warmth of family dinners, the sting of heartbreak — all returned with vivid clarity. The rain, in its honest simplicity, had a way of washing not just the city but the soul. When it stopped, the world looked cleaner, brighter, and full of second chances. He smiled and walked on, feeling lighter than before."
]


# Global trackers
start_time = None
timer_id = None
sentence_index = 0
user_name = ""
total_words_typed = 0
total_correct_chars = 0
total_total_chars = 0
current_pos = 0
selected_time = 60

# In-memory storage for scores
user_scores = {}

def save_user_score(username, wpm, accuracy):
    if username not in user_scores:
        user_scores[username] = []
    user_scores[username].append({
        "WPM": wpm,
        "Accuracy": accuracy,
        "Time": round(time.time())
    })

def show_history():
    if not user_scores:
        messagebox.showinfo("History", "No records found.")
        return
    history = ""
    for user, records in user_scores.items():
        history += f"\nUser: {user}\n"
        for rec in records:
            history += f"  WPM: {rec['WPM']}, Accuracy: {rec['Accuracy']}%, Time: {time.strftime('%Y-%m-%d %H:%M:%S', time.localtime(rec['Time']))}\n"
    messagebox.showinfo("Typing History", history or "No history available.")

def start_typing(event=None):
    global start_time
    if not start_time:
        start_time = time.time()
        run_timer(int(time_var.get()))
    typing_input.focus_set()

def highlight_text(event=None):
    global current_pos, total_correct_chars, total_total_chars
    typed = typing_input.get('1.0', tk.END).rstrip('\n')
    original = sentences[sentence_index]

    display_text.tag_remove("correct", "1.0", tk.END)
    display_text.tag_remove("incorrect", "1.0", tk.END)
    display_text.tag_remove("current", "1.0", tk.END)

    current_pos = 0
    for i in range(min(len(typed), len(original))):
        if typed[i] == original[i]:
            current_pos = i + 1
        else:
            break

    total_correct_chars = 0
    for i in range(len(original)):
        index = f"1.0 + {i} chars"
        if i < len(typed):
            if typed[i] == original[i]:
                display_text.tag_add("correct", index, f"{index} +1c")
                total_correct_chars += 1
            else:
                display_text.tag_add("incorrect", index, f"{index} +1c")
        if i == current_pos:
            display_text.tag_add("current", index, f"{index} +1c")

    if typed.rstrip() == original:
        next_sentence()

    return "break" if event and event.keysym == "Return" else None

def next_sentence():
    global sentence_index, current_pos, total_words_typed, total_total_chars
    typed_text = typing_input.get('1.0', tk.END).strip()
    words_typed = len(typed_text.split())
    total_words_typed += words_typed
    total_total_chars += len(sentences[sentence_index])

    sentence_index = (sentence_index + 1) % len(sentences)
    current_pos = 0
    update_display()
    typing_input.delete('1.0', tk.END)
    typing_input.focus_set()

def update_display():
    display_text.config(state='normal')
    display_text.delete('1.0', tk.END)
    display_text.insert(tk.END, sentences[sentence_index])
    display_text.tag_add("current", "1.0", "1.1")
    display_text.config(state='disabled')

def reset_test():
    global start_time, timer_id, sentence_index, total_words_typed, total_correct_chars, total_total_chars, current_pos
    if timer_id:
        root.after_cancel(timer_id)
        timer_id = None
    start_time = None
    sentence_index = 0
    total_words_typed = 0
    total_correct_chars = 0
    total_total_chars = 0
    current_pos = 0
    result_label.config(text="")
    timer_label.config(text=f"Time: {time_var.get()}")
    update_display()
    typing_input.delete('1.0', tk.END)
    root.after(100, lambda: typing_input.focus_set())

def calculate_speed():
    global start_time, timer_id
    if timer_id:
        root.after_cancel(timer_id)
        timer_id = None
    if not start_time:
        return
    end_time = time.time()
    time_taken = max(end_time - start_time, 1)

    if time_taken < 3:
        messagebox.showwarning("Too Soon", "Please type for at least a few seconds.")
        return

    typed_text = typing_input.get('1.0', tk.END).strip()
    total_words_typed_local = len(typed_text.split())
    total_chars_local = len(sentences[sentence_index])
    global total_words_typed, total_total_chars, total_correct_chars
    total_words_typed += total_words_typed_local
    total_total_chars += total_chars_local

    wpm = round((total_words_typed / time_taken) * 60)
    accuracy = round((total_correct_chars / total_total_chars) * 100) if total_total_chars > 0 else 0

    result_label.config(text=f"{user_name}, Time: {round(time_taken, 2)}s | Speed: {wpm} WPM | Accuracy: {accuracy}%")
    save_user_score(user_name, wpm, accuracy)

def run_timer(seconds):
    global timer_id
    def countdown(count):
        global timer_id
        timer_label.config(text=f"Time: {count}")
        if count > 0:
            timer_id = root.after(1000, countdown, count - 1)
        else:
            calculate_speed()
    countdown(seconds)

def prompt_username():
    global user_name
    root.withdraw()
    while not user_name:
        user_name = simpledialog.askstring("Username", "Enter your name:", parent=root)
        if not user_name:
            if messagebox.askyesno("Exit", "No username entered. Exit?", parent=root):
                root.destroy()
                return
        elif not user_name.strip():
            messagebox.showwarning("Invalid Input", "Username cannot be empty.", parent=root)
            user_name = ""
    root.deiconify()
    reset_test()

# GUI Setup
root = tk.Tk()
root.title("Shadowing Typing Speed Tester")
root.geometry("800x550")
root.configure(bg="#e6f2ff")

title = tk.Label(root, text="Shadowing Typing Speed Tester", font=("Helvetica", 24, "bold"), bg="#e6f2ff", fg="#004d99")
title.pack(pady=10)

# Time selection
time_var = tk.StringVar(value="60")
time_frame = tk.Frame(root, bg="#e6f2ff")
time_frame.pack(pady=5)
tk.Label(time_frame, text="Select Time (sec):", font=("Helvetica", 12), bg="#e6f2ff").pack(side="left", padx=5)
time_dropdown = ttk.Combobox(time_frame, textvariable=time_var, values=["30", "60", "120"], width=5, state="readonly", font=("Helvetica", 12))
time_dropdown.pack(side="left")

display_text = tk.Text(root, height=4, wrap='word', font=("Helvetica", 14), bg="#f0f0f0", fg="#333", state='disabled')
display_text.pack(padx=20, pady=10, fill='x')
display_text.tag_configure("correct", foreground="green")
display_text.tag_configure("incorrect", foreground="red")
display_text.tag_configure("current", underline=True)

typing_input = tk.Text(root, height=4, wrap='word', font=("Helvetica", 14), bg="#ffffff", fg="#000000")
typing_input.pack(padx=20, pady=10, fill='x')
typing_input.bind("<KeyRelease>", highlight_text)
typing_input.bind("<Return>", lambda e: "break")
typing_input.bind("<FocusIn>", start_typing)

timer_label = tk.Label(root, text="Time: 60", font=("Helvetica", 14), bg="#e6f2ff")
timer_label.pack()

result_label = tk.Label(root, text="", font=("Helvetica", 14), bg="#e6f2ff")
result_label.pack(pady=10)

btn_frame = tk.Frame(root, bg="#e6f2ff")
btn_frame.pack()

submit_btn = tk.Button(btn_frame, text="Submit", command=calculate_speed, width=15, font=("Helvetica", 12))
submit_btn.grid(row=0, column=0, padx=10)

reset_btn = tk.Button(btn_frame, text="Reset / New", command=reset_test, width=15, font=("Helvetica", 12))
reset_btn.grid(row=0, column=1, padx=10)

history_btn = tk.Button(btn_frame, text="History", command=show_history, width=15, font=("Helvetica", 12))
history_btn.grid(row=0, column=2, padx=10)

new_user_btn = tk.Button(btn_frame, text="New User", command=prompt_username, width=15, font=("Helvetica", 12))
new_user_btn.grid(row=0, column=3, padx=10)

prompt_username()
root.mainloop()
