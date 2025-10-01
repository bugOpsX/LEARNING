def add_elements(base_list, elements):
    """
    Add all elements from `elements` into `base_list`.
    """
    for el in elements:
        base_list.append(el)
    print("After adding elements:", base_list)
    return base_list

def remove_element(lst, element):
    """
    Remove the first occurrence of `element` from `lst` if it exists.
    """
    if element in lst:
        lst.remove(element)
        print(f"Removed {element}. New list:", lst)
    else:
        print(f"{element} not found in list. No removal.")
    return lst

def search_element(lst, element):
    """
    Return the index of `element` in `lst` if found, else -1.
    """
    try:
        idx = lst.index(element)
        print(f"Found {element} at index {idx}")
        return idx
    except ValueError:
        print(f"{element} not present in list")
        return -1

def slice_list(lst, start, end):
    """
    Return a new list which is a slice from `start` to `end` (exclusive).
    """
    sliced = lst[start:end]
    print(f"Slice from {start} to {end}:", sliced)
    return sliced

def combine_lists(lst1, lst2):
    """
    Combine two lists and return the result.
    """
    combined = lst1 + lst2
    print("Combined list:", combined)
    return combined

def main():
    my_list = [10, 20, 30, 40]
    print("Original:", my_list)

    add_elements(my_list, [50, 60])
    remove_element(my_list, 20)
    search_element(my_list, 30)
    search_element(my_list, 100)
    slice_list(my_list, 1, 4)
    combine_lists(my_list, [70, 80])

if __name__ == "__main__":
    main()
