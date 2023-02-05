#include<iostream>
using namespace std;
//functional overloading
 class A{
     public:
     void func(){
         cout<<"i am a function with no argument"<<endl;
     }
     void func(int a){
         cout<<"i am a function with argument"<<endl;
     }
     void func(char a){
         cout<<" i am a function with a argument"<<endl;
     }
 };
 int main(){
     A obj;
     obj.func();
     obj.func(4);
     obj.func('a');
    }