#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int map[n+1];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;i++){
        map[i]=0;
    }
    for(int i=1;i<=n;i++){
        map[arr[i]]++;
    }
    int count=0;
    for(int i=1;i<=n;i++){
        if(map[i]==1){
            count++;
        }
    }
    /*vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }map<int ,int>mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    int count=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second==1){
            count++;
        }
    }*/
    if(count==n){
       if(n%2==0){
        cout<<"Yes"<<endl;
       }
       else{
        cout<<"No"<<endl;
       }
    }
    else{
        cout<<"Yes"<<endl;
    }
}