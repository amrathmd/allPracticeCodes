#cant change class variable using the instance


class Employee:
    noOfSalaries=8  #iska larry harry se koi matlab nahi
    pass

harry=Employee()
larry=Employee()

harry.name="Amrath"
harry.salary=45

larry.name="rohan"
larry.salary=55
print(larry.__dict__)
print(Employee.noOfSalaries)
Employee.noOfSalaries=9
print(Employee.noOfSalaries)
larry.noOfSalaries=6   #this is different instance of an object
print(larry.__dict__) #add number of salaries to the instance of the object
print(Employee.__dict__)
