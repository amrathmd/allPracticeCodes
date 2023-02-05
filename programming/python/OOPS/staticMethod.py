

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

    #static method

    def isclose(day):
        if day=="sunday":
            return True
        else:
            return False


shubam=Employee("shubam",500)
harry=Employee("Harry",200)
larry=Employee("Larry",200)
print(Employee.isclose('sunday'))

print(harry.printDetails())
print(harry.noOfLeaves)
harry.change_leaves(34)
print(harry.noOfLeaves)