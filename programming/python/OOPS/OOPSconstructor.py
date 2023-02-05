class Employee:
    noOfLeaves=8  #iska larry harry se koi matlab nahi

    def __init__(self,aname,asalary):
        self.name=aname
        self.salary=asalary
    
    def printDetails(self):
        return f"my name is {self.name},my salary is {self.salary}"



harry=Employee("Harry",200)
larry=Employee("Larry",200)

Amrath=Employee("Amrath",200)
print(Amrath.printDetails())

print(larry.printDetails())