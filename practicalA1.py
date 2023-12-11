# Total length of the list
def len_list(students):
    count = 0
    for character in students:
        count += 1
    return count


# Asking user to enter a roll number
def roll_number(students, len_of_students, sport):
    print(f"Enter a roll number who play {sport}")
    for i in range(len_of_students):
        roll_number = int(input("Enter a roll number:"))
        students.append(roll_number)


# Displaying the students
def display(sport, students):
    print(f"Total number of studens who play {sport}")
    print(students)


# Both game
def both_game(both_games, updated_list, sport1, sport2):
    for sport_1 in sport1:
        if sport_1 in sport2:
            both_games.append(sport_1)
    delet_duplicate(both_games, updated_list)
    

# Deleting the duplicate entries
def delet_duplicate(o_list, u_list):
    for item in o_list:
        if item not in u_list:
            u_list.append(item)


# either cricket or badminton
def either(student_list, sport, empty_list):
    for student in student_list:
        if student not in sport:
            empty_list.append(student)
        
    

# getting total students
groupA = int(input("How many students play the cricket:"))
groupB = int(input("How many students play the football:"))
groupC = int(input("How many students play the badminton:"))

# Empty students list
cricket = []
football = []
badminton = []
all_sport = []

# Criket, Football, Badminton
roll_number(cricket, groupA, "Cricket")
roll_number(football, groupB, "Football")
roll_number(badminton, groupC, "Badminton")


# Student who play all sport
all_sport = cricket + badminton + football


display("cricket", cricket)
display("badminton", badminton)
display("football", football)

# Student who play cricket and badminton
both_cricket_badminton = []
cricket_badminton = []
both_game(cricket_badminton, both_cricket_badminton, cricket, badminton)
both_game(cricket_badminton, both_cricket_badminton, badminton, cricket)
print("Students who play cricket and badminton\n",both_cricket_badminton)


# Students who play either cricket or badminton but not both
either_cricket_badminton = []
either(cricket, badminton, either_cricket_badminton)
either(badminton, cricket, either_cricket_badminton)
print("Students who play either cricket or badminton\n",either_cricket_badminton)


# Students who play neither cricket or badminton
# Check weather either function is applicable or not
neither_cricket_badminton = []
for student in all_sport:
    if student not in cricket and student not in badminton:
        neither_cricket_badminton.append(student)
print("Students who neither play cricket and badminton are\n", neither_cricket_badminton)


# Student who play football and cricket but not badminton
football_cricket = []
both_football_cricket = []
both_game(both_football_cricket, football_cricket, cricket, football)
both_game(both_football_cricket, football_cricket, football, cricket)
print("Student who play football and cricket but not badminton are\n",football_cricket)

#OUTPUT
"""
How many students play the cricket:2
How many students play the football:2
How many students play the badminton:2
Enter a roll number who play Cricket
Enter a roll number:1
Enter a roll number:2
Enter a roll number who play Football
Enter a roll number:2
Enter a roll number:3
Enter a roll number who play Badminton
Enter a roll number:2
Enter a roll number:4
Total number of studens who play cricket
[1, 2]
Total number of studens who play badminton
[2, 4]
Total number of studens who play football
[2, 3]
Students who play cricket and badminton
 [2]
Students who play either cricket or badminton
 [1, 4]
Students who neither play cricket and badminton are
 [3]
Student who play football and cricket but not badminton are
 [2]

"""