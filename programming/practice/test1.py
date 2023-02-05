class student:
    def __init__(self,name,rollno,marks):
        self.name=name
        self.rollno=rollno
        self.marks=marks
    def accept(self,name,rollno,marks):
        ob=student(name,rollno,marks)
        ls.append(ob)
    def search(self,rn):
        for i in range(len(ls)):
            if(ls[i].rollno==rn):
                return i
    def delete(self,rn):
        i=self.search(rn)
        ls.pop(i)
    def display(self):
        print(self.name)
        print(self.marks)
        print(self.rollno)
ls=[]
obj=student('',0,0)
n=3
for i in range(n):
    name=input("Enter the name:")
    rn=int(input("Enter the rollNo:"))
    marks=int(input("Enter the marks:"))
    
    obj.accept(name,rn,marks)

print(obj.search(2))
