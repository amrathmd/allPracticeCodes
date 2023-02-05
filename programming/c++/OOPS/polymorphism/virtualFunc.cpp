#include<iostream>
using namespace std;

class base{
    public:
    virtual void print(){//to run function from derived function:
        cout<<"this is the base class print function"<<endl;
    }
    void display(){
        cout<<"this is the base class of display func"<<endl;
    }
};
class derived:public base{
    public:
    
    void display(){
        cout<<"this is the derived class of display func"<<endl;
    }
};
int main()
{
    base *baseptr;
    derived d;
    baseptr=&d;

    baseptr->print();
    baseptr->display();
}