#tuples are same as lists and are IMMUTABLE DATA TYPE
#duplicates are allowed
marks=(99,45,67,97)
print(type(marks))
print(marks)
print(marks[2])
for score in marks:
    print(score)

print(marks.count(97))#number of times the number 97 repeated
print(marks.index(67))#return index
