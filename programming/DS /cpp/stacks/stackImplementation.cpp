#include<iostream>
using namespace std;
#define n 100
class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int val){
        if(top==n-1){
            cout<<"stack Overflow"<<endl;
            return;
        }top++;
        arr[top]=val;
    }
    void pop(){
        if(top==-1){
            cout<<"no element to pop"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        return arr[top];
    }
    bool empty(){
        return top;
    }
};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
}
