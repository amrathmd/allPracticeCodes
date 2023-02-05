#include<iostream>
using namespace std;
void  increasing(int n){
    if(n==0){
        return;
    }  
    
    increasing(n-1);
    cout<<n<<" "; 
    
}
void decreasing(int n){
    if(n==0){
        return;
    }  
    cout<<n<<" "; 
    decreasing(n-1);
    
}
int main(){
    decreasing(4);
    cout<<endl;
    increasing(4);
}