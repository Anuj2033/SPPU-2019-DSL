def highest(marks):
    mark = marks[0]
    for each_st in marks:
        if each_st > mark:
            mark = each_st
    return mark


def lowest(marks):
    mark = marks[0]
    for score in marks:
        if score < mark:
            mark = score
    return mark

def high_freq(marks, freq):
    count = 0
    for mark in marks:
        if mark == freq:
            count += 1
    return count


def avg_score(marks):
    addition = 0
    count = 0
    for mark in marks:
        addition += mark
        count += 1
    averange = int(addition / count)
    return averange


no_of_students = int(input("How many students:"))
studetns_marks = []
absent_student = 0

for i in range(no_of_students):
    mark = input("Enter a mark:")
    if mark == "A" or mark == "a":
        absent_student += 1
    else:
        studetns_marks.append(int(mark))

print("Students marks:", studetns_marks)
print("Absent student in the class are:", absent_student)

print("Highest marks in the class are:", highest(studetns_marks))
print("Lowest mark in the class:", lowest(studetns_marks))

frequecy = int(input("Enter a mark to count frequency:"))
print("Highest frequecy of the mark in the class are:", high_freq(studetns_marks, frequecy))
print("Average marks in the class are:", avg_score(studetns_marks))