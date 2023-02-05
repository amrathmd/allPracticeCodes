#include<bits/stdc++.h>
//find the max pair in sorted array rotated with atarget;
using namespace std;
void maxPair(vector<int>v,int x){
    int i=0;
    for(i=0;i<v.size();i++){
        if(v[i]>v[i+1]){
            break;
        }
    }
    int l=i+1;//larger
    int r=i;//smaller
    while(l!=r){
        if(v[l]+v[r]==x){
            cout<<v[l]<<" "<<v[r]<<endl;

        }
        if(v[l]+v[r]<x)

            l=(l+1)%v.size();
        
        else
            r=(v.size()+r-1)%v.size();
            
        
    }

}
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int x;
    cin>>x;
    maxPair(v,x);
}