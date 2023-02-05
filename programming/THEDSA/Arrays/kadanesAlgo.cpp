#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int getMaximumSubarraySum(vector <int> v){
    int maxSoFar=INT_MIN;
    int maxEndingHere=0;
    for(int i=0;i<v.size();i++){
        maxEndingHere=maxEndingHere+v[i];
        if(maxSoFar<maxEndingHere){
            maxSoFar=maxEndingHere;
        }
        if(maxEndingHere<0){
           maxEndingHere=0;
        }

}return maxSoFar;
}
/*nums = [-2,1,-3,4,-1,2,1,-5,4]*/
int main(){
    vector <int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<getMaximumSubarraySum(v)<<endl;


}