#dictionaries stores values in key:value pair
#UNORDERED DATA TYPE

marks={"english":90,"chemistry":60}
print(marks["chemistry"])
marks["physics"]=97 #adding new element
print(marks)
print(marks.items())#print Items
print(marks.values())
print(marks.keys())
for keys in marks:
    print(marks[keys])
for values in marks:
    print(values)