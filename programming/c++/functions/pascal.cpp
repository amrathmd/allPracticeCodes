#include<iostream>
using namespace std;
int fact (int num){
    int f=1;
    for(int i=num;i>=1;i--){
        f*=i;
    }return f;
}
int ncr(int n,int r){
    int ans=fact(n)/(fact(n-r)*fact(r));
    return ans;
}
int main(){
    for(int i=0;i<5;i++){
        for (int j=0;j<=i;j++){
            cout<<ncr(i,j);
        }cout<<endl;
    }
}