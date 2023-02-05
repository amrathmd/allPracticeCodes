class Node:
    def __init__(self,data):
        self.dataval=data
        self.nextval=None
        self.preval=None
class doubleLL:
    def __init__(self):
        self.head=None
    def insertAtHead(self,data):
        if self.head is None:
            self.head=Node(data)
            return
        newnode=Node(data)
        newnode.nextval=self.head
        self.head.preval=newnode
        self.head=newnode
    def insertAtTail(self,data):
        if self.head is None:
            self.head=Node(data)
            return 
        newnode=Node(data)
        temp=self.head
        while temp.nextval is not None:
            temp=temp.nextval
        temp.nextval=newnode
        newnode.preval=temp
    def deletionAtHead(self,data):
        temp=self.head
        temp.nextval.preval=None
        temp=temp.nextval
        
    def deletion(self,data):
        temp=self.head
        
        if temp.dataval is data:
            self.deletionAtHead(data)
            return
        while temp.dataval is not data:
            temp=temp.nextval
        
        if temp.nextval is not None:
            temp.preval.nextval=temp.nextval
            temp.nextval.preval=temp.nextval
        
        else:
            temp.preval.nextval=None


    def printLL(self):
        temp=self.head
        while temp is not None:
            print(temp.dataval)
            temp=temp.nextval
        
    
llist=doubleLL()

llist.insertAtHead(3)
llist.insertAtHead(2)
llist.insertAtHead(1)

llist.insertAtTail(4)
llist.deletion(1)
llist.printLL()
