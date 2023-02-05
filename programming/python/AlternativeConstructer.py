class Employee:
    noOfLeaves=8  #iska larry harry se koi matlab nahi

    def __init__(self,aname,asalary):#classs ka constructor
        self.name=aname
        self.salary=asalary
    
    def printDetails(self):
        return f"my name is {self.name},my salary is {self.salary}"

    #classMethod-chages instances of the class itself and also object

    def change_leaves(cls,newleaves):
        cls.noOfLeaves=newleaves

    def from_str(cls,string):
        params=string.split("-")
        print(params)
        return cls(params[0],params[1])


harry=Employee("Harry",200)
larry=Employee("Larry",200)
Amrath=Employee.from_str('Amrath-480')
print(Amrath.salary)