#include<iostream>
#include<string>
using namespace std;
class student{
     string name;//private number(setname function is written to access)
    public:
    int age;
    bool gender;

    void setName(string s){//acessing private members of a class
        name=s;
    }

    void printInfo(){
        cout<<"Name:";
        cout<<name<<endl;
        cout<<"Age:";
        cout<<age<<endl;
        cout<<"Gender:";
        cout<<gender<<endl;
    }
    
};
int main(){
   student a[3];
   for(int i=0;i<3;i++){
       string s;
       cout<<"Name=";
       cin>>s;
       a[i].setName(s);
       cout<<"age=";
       cin>>a[i].age;
       cout<<"gender=";
       cin>>a[i].gender;
   }
   for(int i=0;i<3;i++){
       a[i].printInfo();
   }
}