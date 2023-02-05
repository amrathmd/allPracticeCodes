#include<iostream>
#include<bits/stdc++.h>
using namespace std;



vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        int n=0;
        for (int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        res.push_back(temp);
                    }
                }
            }
        }return res;
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
    vector<vector<int>> res=threeSum(v);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[0].size();j++){
            cout<<res[i][j]<<" ";
        }cout<<endl;
    }
}