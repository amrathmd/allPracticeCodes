#include<bits/stdc++.h>
//had some problem in the code

using namespace std;
int fact(int a){
    int res=1;
    for(int i=a;i>0;i--){
        res=res*i;
    }
    return res;
}
vector<vector<int>> rCombinations(vector<int>&arr,int r){
    int ncr=(fact(arr.size())/(fact(arr.size()-r)*fact(r)));
    vector<vector<int>>res;
    int k=0;
    for(int i=0;i<arr.size();i++){
        vector<int>temp;
        temp.push_back(arr[i]);
        for(int j=i+1;(j-(i+1))<r;j++){
            temp.push_back(arr[j]);
        }res.push_back(temp);
    }return res;
}
int main(){
    vector<int>arr={1,2,3,4};
    vector<vector<int>> res=rCombinations(arr,2);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<2;j++){
            cout<<res[i][j];
        }cout<<endl;
    }
    }