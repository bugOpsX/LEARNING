def second_largest(arr):
    # Remove duplicates
    distinct = set(arr)
    
    # If only one unique number exists
    if len(distinct) < 2:
        return None
    
    # Sort in descending order
    sorted_nums = sorted(distinct, reverse=True)
    return sorted_nums[1]


# Test cases
print(second_largest([12, 35, 1, 10, 34, 1]))  # 34
print(second_largest([5, 5, 5]))               # None
print(second_largest([10]))                    # None
print(second_largest([-1, -2, -3, -1]))        # -2
