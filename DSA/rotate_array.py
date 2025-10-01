# DSA/rotate_array.py

"""
Problem: Rotate Array to the Right by k Steps

Given an array, rotate the array to the right by k steps, where k is non-negative.

Example:
Input:  nums = [1, 2, 3, 4, 5, 6, 7], k = 3
Output: [5, 6, 7, 1, 2, 3, 4]

Approach:
1. Normalize k to ensure it's within the array length (k = k % n).
2. Reverse the entire array.
3. Reverse the first k elements.
4. Reverse the remaining n - k elements.
This approach runs in O(n) time and uses O(1) extra space.
"""

def rotate_array(nums, k):
    """
    Rotates the array to the right by k steps in-place.
    :param nums: List[int] - The array to rotate
    :param k: int - Number of steps to rotate
    :return: None (modifies nums in-place)
    """
    n = len(nums)
    k %= n  # Handle k greater than n

    # Helper function to reverse a portion of the array in-place
    def reverse(start, end):
        while start < end:
            nums[start], nums[end] = nums[end], nums[start]
            start += 1
            end -= 1

    # Step 1: Reverse entire array
    reverse(0, n - 1)
    # Step 2: Reverse first k elements
    reverse(0, k - 1)
    # Step 3: Reverse remaining n - k elements
    reverse(k, n - 1)


# Example usage for testing
if __name__ == "__main__":
    nums = [1, 2, 3, 4, 5, 6, 7]
    k = 3
    print("Original array:", nums)
    rotate_array(nums, k)
    print(f"Array after rotating by {k} steps:", nums)
    # Expected output: [5, 6, 7, 1, 2, 3, 4]
