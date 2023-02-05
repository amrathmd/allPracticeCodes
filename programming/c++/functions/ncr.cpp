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
    int n,r;
    cin>>n;
    cin>>r;
    cout<<ncr(n,r);

}