class Node:
    def __init__(self,data):
        self.dataval=data
        self.nextval=None
class linkedList:
    def __init__(self):
        self.head=None
    def insertAtHead(self,data):
        if self.head is None:
            self.head=Node(data)
            return
        newnode=Node(data)
        newnode.nextval=self.head
        self.head=newnode
    def insertAtTail(self,data):
        if self.head is None:
            self.head=Node(data)
            return 
        temp=self.head
        while temp.nextval is not None:
            temp=temp.nextval
        temp.nextval=Node(data)
    def deletion(self,data):
        if self.head.dataval is data:
            self.head=self.head.nextval
            return
        temp=self.head
        while temp.nextval.dataval is not data:
            temp=temp.nextval
        temp.nextval=temp.nextval.nextval
    def reverse(self):
        currptr=self.head
        prevptr=None
        nextptr=None
        while currptr is not None:
            nextptr=currptr.nextval
            currptr.nextval=prevptr
            prevptr=currptr
            currptr=nextptr
        self.head=prevptr

    def printLL(self):
        temp=self.head
        while temp is not None:
            print(temp.dataval)
            temp=temp.nextval
llist=linkedList()
llist.insertAtHead(1)
llist.insertAtHead(2)
llist.insertAtHead(3)
llist.insertAtTail(0)
llist.deletion(3)
llist.insertAtHead(3)
llist.printLL()
llist.reverse()
print("list after reversing the list:")
llist.printLL()