# Python Program to Count Frequency of Elements in a List

def count_frequency(elements):
    frequency = {}  # Dictionary to store occurrences

    # Loop through each element in the list
    for item in elements:
        if item in frequency:
            frequency[item] += 1
        else:
            frequency[item] = 1

    # Display the result
    for key, value in frequency.items():
        print(f"{key} -> {value} time(s)")


if __name__ == "__main__":
    # Example: User input or predefined list
    user_input = input("Enter elements separated by space: ").split()
    # Convert numeric values to int if possible
    elements = [int(x) if x.isdigit() else x for x in user_input]

    print("\n🔍 Frequency of Elements:")
    count_frequency(elements)
