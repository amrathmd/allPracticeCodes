



class marks:
    def __init__(self,maths,CS,DS):
        self.math=maths
        self.CS=CS
        self.DS=DS



class students(marks):
    def __init__(self,name,rollno,maths,CS,DS):
        self.name=name
        self.rollno=rollno
        super().__init__(maths,CS,DS)
    def display(self):
        print(self.name)
        print(self.rollno)
        print(self.math)
        
ob=students("amrath",1,20,20,20)
ob.display()
        

    