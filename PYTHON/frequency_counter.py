# Python Program to Count Frequency of Elements in a List
# -------------------------------------------------------
# This program counts how many times each element appears in a given list.
# It uses a dictionary to store the frequency of each element.
# This is a simple example of using loops and dictionaries in Python.

def count_frequencies(lst):
    """
    Counts the frequency of each element in the given list.

    Parameters:
        lst (list): The input list containing elements (numbers or strings).

    Returns:
        dict: A dictionary where keys are list elements and values are their frequencies.
    """
    freq = {}  # Empty dictionary to store frequency

    # Loop through each element in the list
    for elem in lst:
        # If element is already in dictionary, increment its count
        if elem in freq:
            freq[elem] += 1
        # Otherwise, add the element with initial count 1
        else:
            freq[elem] = 1

    return freq


def print_frequencies(freq_dict):
    """
    Prints each element and its frequency in a clean format.

    Parameters:
        freq_dict (dict): Dictionary with element-frequency pairs.
    """
    print("\nElement Frequencies:")
    print("--------------------")
    for elem, count in freq_dict.items():
        # Use "time" or "times" depending on the count
        times_word = "time" if count == 1 else "times"
        print(f"{elem} -> {count} {times_word}")


if __name__ == "__main__":
    # Example input list (you can modify or take user input here)
    data = [1, 2, 2, 3, 1, 4, 2]

    # OR uncomment the following lines to take input from user
    # raw_input = input("Enter elements separated by spaces: ")
    # data = raw_input.split()  # This will handle string inputs
    # # Convert to integers if all elements are digits
    # data = [int(x) if x.isdigit() else x for x in data]

    # Count frequencies using the function
    frequencies = count_frequencies(data)

    # Print the result
    print_frequencies(frequencies)
