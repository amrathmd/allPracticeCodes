#include<bits/stdc++.h>
using namespace std;
int trap(vector<int>& height) {
        int res=0;
        for(int i=1;i<height.size()-1;i++){
            int left=height[i];
            for(int j=0;j<i;j++){
                left=max(left,height[j]);
            
            }int right=height[i];
            for(int j=i+1;j<height.size();j++){
                right=max(right,height[j]);
            }res=res + (min(left,right)-height[i]);
        }return res;
    }

int main(){
    vector<int>v={0,1,0,2,1,0,1,3,2,1,2,1};
    int res=trap(v);
    cout<<res<<endl;
}
