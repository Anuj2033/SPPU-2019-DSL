user = input("Enter a string:")

# checking length of the list
def len_list(result):
    _count = 0
    for character in result:
        _count += 1
    return _count


print(f"Total length of above string are {len_list(user)}")

# Occurance of the string
occ_count = 0
occ = input("Which letter do you want to find:")
for i in range(len_list(user)):
    if occ == user[i]:
        occ_count += 1

print(f"Total {occ} letter in the string are {occ_count}")

# palindrome
pali_word = input("Enter a word to check palindrome: ")
if pali_word == user:
    print(f"The {pali_word} is palindrome")
else:
    print(f"The {pali_word} is not a palindrome.")


# occurance of the word/letter without space
word_space_count = 0
word_length = len_list(user)

for i in range(len_list(user)):
    if user[i] == " ": 
        word_space_count += 1

total_len = word_length - word_space_count
print(f"Total lenght of the letter without space is {total_len}")

# Apperance of the first word/letter
app = input("write letter to display it's first occurance: ")
for i in range(len_list(user)):
    if app == user[i]:
        print(f"The fist occrance of the letter in the above string are {i}")
        break

# longest word in the string
result = []
remove_by = " "
start = 0

# separating each word by the space
for i in range(len_list(user)):
    if user[i] == remove_by:
        result.append(user[start:i])
        start  = i + 1
result.append(user[start:])

# checking the longest lenght 
length = 0
for i in range(len_list(result)):
    if len(result[i]) > length:
        length = len(result[i])

print("Longest word in the string are:")
for i in range(len_list(result)):
    if length == len_list(result[i]):
        print(result[i])


# Output
# Enter a string:my name is anuj
# Total length of above string are 15
# Which letter do you want to find:a
# Total a letter in the string are 2
# Enter a word to check palindrome: name
# The name is not a palindrome.
# Total lenght of the letter without space is 12
# write letter to display it's first occurance: a
# The fist occrance of the letter in the above string are 4
# Longest word in the string are:
# name
# anuj