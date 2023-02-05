#include<iostream>
#include<string>
using namespace std;
class A{
    public:
    int a;
    void FuncA(){
        cout<<"funcA"<<endl;
    }
    private:
    int b;
    void FuncB(){
        cout<<"FuncB \n";
    }
    protected:
    int c;
    void FuncC(){
        cout<<"funcC \n";
    }
};
int main(){
    A obj;
    obj.FuncA();
    obj.FuncB();
    obj.FuncC();
    
}