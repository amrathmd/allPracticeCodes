/*product of array leaving itself*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
         int mul=1;
        vector<int>ans(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            mul*=nums[i-1];
            ans[i]*=mul;
        }
        mul=1;
        for(int i=nums.size()-2;i>=0;i--){
            mul*=nums[i+1];
            ans[i]*=mul;
        }
        return ans;
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
    vector<int>ans;
    ans=productExceptSelf(v);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


}