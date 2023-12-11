def selection_sort(arr):
    n = len(arr)

    for i in range(n):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j

        arr[i], arr[min_index] = arr[min_index], arr[i]
    
    print(arr)


def bubble_sort(marks):
    length = len(marks)
    for i in range(length):
        for j in range(length -1):
            if marks[j] > marks[j + 1]:
                marks[j], marks[j + 1] = marks[j + 1], marks[j]
    
    return marks


percentage = []

no_of_students = int(input("How many students in the class:"))

for i in range(no_of_students):
    score = float(input("Enter your percentage:"))
    percentage.append(score)

print("---Selection Sort----")
selection_sort(percentage)

print("----Bubble Sort----")
print(bubble_sort(percentage))
