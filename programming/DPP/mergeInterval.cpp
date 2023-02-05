#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> mergeInterval(vector<vector<int>>& arr){
    sort(arr.begin(),arr.end());
    int index=0;
    for(int i=1;i<arr.size();i++){
        if(arr[index][1]>=arr[i][0]){
            arr[index][1]=max(arr[index][1],arr[i][1]);
        }
        else{
            index++;
            arr[index]=arr[i];
        }
    }for(int i=0;i<arr.size()-index;i++){
        arr.pop_back();
    }return arr;
}
int main(){
    vector<vector<int>>v={{1,3},{2,6},{8,10}};
    mergeInterval(v);
    for(auto i:v){
        for(auto t:i){
            cout<<t<<" ";
        }cout<<endl;
    }

}