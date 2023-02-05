#include<bits/stdc++.h>
using namespace std;

class specialStack{
    int top=-1;
    stack<int>s;
    stack<int>aux;

    public:
        void push(int data){
            if(s.empty()){
                s.push(data);
                aux.push(data);
            }else{
                s.push(data);
                if(data<aux.top()){
                    aux.push(data);

                }else{
                    aux.push(aux.top());
                }
            }
        }
        void pop(){
            s.pop();
            aux.pop();
        }
        int getMin(){
            return aux.top();
        }



};
int main(){
    specialStack s;
    s.push(6);
    s.push(10);
    s.push(11);
    s.push(5);
    cout<<s.getMin()<<endl;
    s.pop();s.pop();
   
    cout<<s.getMin()<<endl;

}