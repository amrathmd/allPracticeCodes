#classes - Templates
#Objects - instance of the class
#OOPS -uses DRY concept(do not repeat concept)
#acces functions ex: gets_no_of_films
class student:
    pass
harry=student()
larry=student()
harry.name="Amrath"  #values to the instance
harry.age=20  #here name subjects age are instances of the class student
harry.room=307
larry.subjects=["math","physics"]
print(larry.subjects)
print(harry.name)
print(harry,larry)