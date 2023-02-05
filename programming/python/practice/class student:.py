class student:
    leaves=10
    def __init__(self,aname,identity):
        self.name=aname
        self.id=identity
    def printDetails(self):
        return f"my name is {self.name} with id {self.id}"
    def changeleaves(cls,leaves):
        cls.dayleaves=leaves
Amrath=student("Amrath",123)
Ruman=student("Ruman",234)

print(Amrath.printDetails(Amrath))