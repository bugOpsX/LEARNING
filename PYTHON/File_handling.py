def write_to_file(file_path, text):
    """
    Write `text` to a new file (or overwrite existing) at `file_path`.
    """
    # 'w' mode — write; if file exists, it truncates it, else creates new
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(text)
    print(f"Wrote to file {file_path!r}:")
    print(text)

def read_from_file(file_path):
    """
    Read content from file at `file_path` and return the content.
    """
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        print(f"Read from file {file_path!r}:")
        print(content)
        return content
    except FileNotFoundError:
        print(f"Error: File {file_path!r} not found.")
        return None

def append_to_file(file_path, text):
    """
    Append `text` to the file at `file_path` (does not overwrite existing content).
    """
    # 'a' mode — append; creates file if not exists
    with open(file_path, 'a', encoding='utf-8') as f:
        f.write(text)
    print(f"Appended to file {file_path!r}:")
    print(text)

def demo_file_operations():
    """
    Demonstrate all required file handling operations:
      - write
      - read
      - append
    """
    file_path = "demo_file.txt"

    # 1. Write initial content (overwrites existing)
    initial_text = "Hello, World!\n"
    write_to_file(file_path, initial_text)

    # 2. Read what we wrote
    content = read_from_file(file_path)
    if content is None:
        # If file not found, exit
        return

    # 3. Append more text
    additional_text = "Python is fun!\n"
    append_to_file(file_path, additional_text)

    # 4. Read again to show updated content
    read_from_file(file_path)

def main():
    demo_file_operations()

if __name__ == "__main__":
    main()
