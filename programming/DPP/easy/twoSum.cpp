#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int>res;
        int k,m;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i+1;j<nums.size();j++){
                sum=nums[i]+nums[j];
                if(sum==target) {
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }
            }
        }
        return res;
           
}
int main(){
    vector<int>v={1,2,3,4,5};
    vector<int>res=twoSum(v,9);
    for(auto it:res){
        cout<<it<<" ";
    }
}