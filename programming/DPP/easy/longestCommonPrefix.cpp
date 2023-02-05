#include<bits/stdc++.h>
using namespace std;
 string longestCommonPrefix(vector<string>& strs) {
        string ans;
        for(int i=0;i<strs[0].length();i++){
            for(int j=1;j<strs.size();j++){
                string val;
                if(strs[0][i]!=strs[j][i]){
                    return ans;
                }
            }ans=ans+strs[0][i];
        }return ans;
 }
int main(){
    vector<string>strs={"flower","flow","flight"};
    string res=longestCommonPrefix(strs);
    cout<<res<<endl;
}