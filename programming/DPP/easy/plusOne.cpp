#include<bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int >digits){
    for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]==9){
                digits[i]=0;
            }
            else{
                digits[i]=digits[i]+1;
                return digits;
            }
        }
        
        digits.insert(digits.begin(),1);
        return digits;
}
int main(){
    vector<int>v={9,9,9,9};
    vector<int>res=plusOne(v);
    for(auto i:res){
        cout<<i<<" ";
    }cout<<endl;
    


}