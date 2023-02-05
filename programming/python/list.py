#list is a collection of data types of same type ans these are IMMUATABlE

marks=[50,60,70,80,100]
print(marks[0])   #Index is starting from 0
#can also have negitve indexes
print(marks[-1])
print(marks[0:2])#only 0,1 are included
for score in marks:
    print(score)
'''List Operations'''

marks.append(99)
print(marks)
marks.insert(0,99)#insert(index,value)
marks.pop()#removes last element
marks.remove(50)#removes paricular element
print(marks)
print(99 in marks)
print(len(marks))#output length of marks
marks.clear()#clear all elements in marks
print(marks)

