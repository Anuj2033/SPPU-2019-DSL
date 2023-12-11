def quick_sort(marks):
    length = len(marks)

    if length < 1:
        return marks
    
    pivot = length // 2
    middle_value = marks[pivot]

    left = [x for x in marks if x < middle_value]
    middle = [x for x in marks if x == middle_value]
    right = [x for x in marks if x > middle_value]

    return quick_sort(left) + middle + quick_sort(right)

marks = []
no_of_students = int(input("How many students in the class:"))
for i in range(no_of_students):
    mark = int(input("Enter a marks:"))
    marks.append(mark)

sorting_list = quick_sort(marks)

print("Top 5 scores in the class are:")
print(sorting_list[6:0:-1])
