#dunder method ex:__init__

class Employee:
    noOfLeaves=8  #iska larry harry se koi matlab nahi

    def __init__(self,aname,asalary):
        self.name=aname
        self.salary=asalary
    
    def printDetails(self):
        return f"my name is {self.name},my salary is {self.salary}"

    #classMethod

    def change_leaves(cls,newleaves):
        cls.noOfLeaves=newleaves


    #dunder method
    def __add__(self,other):
        return self.salary+other.salary
     
    def __repr__(self):
        return "Employee :{},{}".format(self.name,self.salary)


harry=Employee("herry",200)
rohan=Employee("kaka",12)
print(rohan.__add__(harry))
print(str(harry))
print(repr(harry))  #before this dunder it prints something ugly
#one of the dunder
a=6
print(a.__add__(7))

