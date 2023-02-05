

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

#inheritance here programmed has allatributes and objexts of employee

class programmer(Employee):
    def __init__(self, aname, asalary,prolang,exp):
        super().__init__(aname,asalary )#super().inti calls constructor of employee
        self.proglang=prolang
        self.experience=exp
    def printDetails(self):
        return f"The programmed is {self.name},and the programmin he knows is {self.proglang}"



amrath=programmer("amrath",120,"python",2)
print(amrath.printDetails())
print(amrath.__dict__)
harry=Employee("Harry",200)
larry=Employee("Larry",200)
print(harry.printDetails())
#print(help(Employee))