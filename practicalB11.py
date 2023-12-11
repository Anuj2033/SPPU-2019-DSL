def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i  # Element found, return its index
    return -1  # Element not found


def sentinel_search(arr, target):
    # Save the last element and replace it with the target as the sentinel
    arr.append(target)

    i = 0
    while arr[i] != target:
        i += 1

    # Restore the original list by removing the appended sentinel
    arr.pop()

    if i < len(arr):
        return i  # Element found, return its index
    else:
        return -1  # Element not found



def binary_search(arr, target):
    low, high = 0, len(arr) - 1

    while low <= high:
        mid = (low + high) // 2
        mid_element = arr[mid]

        if mid_element == target:
            return mid  # Element found, return its index
        elif mid_element < target:
            low = mid + 1
        else:
            high = mid - 1

    return -1  # Element not found

