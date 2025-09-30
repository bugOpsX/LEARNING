from math import inf
from typing import List
import ast
import re

def second_largest_distinct(nums: List[int]) -> int:
    if not nums:
        raise ValueError("Empty list")

    largest = -inf
    second = -inf

    for x in nums:
        if x > largest:
            second = largest
            largest = x
        elif largest > x > second:
            second = x

    if second == -inf:
        raise ValueError("No second largest distinct element")

    return second

def read_int_list_from_input(prompt: str = "Enter integers (e.g., 12 35 1 10 34 1): ") -> List[int]:
    s = input(prompt).strip()
    if not s:
        raise ValueError("Empty input")

    # Try Python literal list first, e.g., "[12, 35, 1]"
    try:
        obj = ast.literal_eval(s)
        if isinstance(obj, (list, tuple)):
            return [int(x) for x in obj]
    except (ValueError, SyntaxError):
        pass

    # Fallback: split by spaces or commas
    parts = re.split(r"[,\s]+", s.strip("[]"))
    parts = [p for p in parts if p]
    return [int(p) for p in parts]

if __name__ == "__main__":
    try:
        arr = read_int_list_from_input()
        print(second_largest_distinct(arr))
    except ValueError as e:
        print(e)