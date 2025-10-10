def is_palindrome_recursive(s, left=0, right=None):
    # Initialize right index on first call
    if right is None:
        right = len(s) - 1
    
    # Base Case: If pointers have crossed, it's a palindrome
    if left >= right:
        return True
    
    # If characters mismatch, it's not a palindrome
    if s[left] != s[right]:
        return False
    
    # Recursive Call: move inward
    return is_palindrome_recursive(s, left + 1, right - 1)


# Driver Code
if __name__ == "__main__":
    string = input("Enter a string: ").replace(" ", "").lower()
    
    if is_palindrome_recursive(string):
        print("✅ Palindrome")
    else:
        print("❌ Not a Palindrome")
