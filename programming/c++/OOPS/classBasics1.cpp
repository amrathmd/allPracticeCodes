#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int age;
    bool gender;

    student(){
        cout<<"default constructor"<<endl;
    }


    student (string s,int a,bool g){//parameterized constructor**
        name=s;
        age=a;
        gender=g;
    }
    void getName(){
        cout<<name<<endl;
    }

    student(student &a){//this is copyconstructor;
        cout<<"copy constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    void printInfo(){
        cout<<"Name:";
        cout<<name<<endl;
        cout<<"Age:";
        cout<<age<<endl;
        cout<<"Gender:";
        cout<<gender<<endl;
    }

    ~student(){
        cout<<"destructor"<<endl;//called at last of the program and destructs all objects(students);
    }
};
int main(){
    student a("amrath",12,1);//add name to the object we need a constructor
    a.getName();
    student b;//default constructor called here
    student c=a;//copy constructor
    c.printInfo();
    student d(a);
    d.printInfo();
}