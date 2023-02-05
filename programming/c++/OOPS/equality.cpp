#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int age;
    bool gender;

    student(string s ,int a ,bool g){
        name=s;
        age=a;
        gender=g;
    }
    bool operator == (student &a){//operator overloading
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        return false;
    }

};
int main(){
    student a("amrath",12,1);
    student b("amrath",12,0);
    if(a==b){//this operator doesnt run directly as it require to check all parameters
        cout<<"same";
    }
    else{
        cout<<"not same"<<endl;
    }
}