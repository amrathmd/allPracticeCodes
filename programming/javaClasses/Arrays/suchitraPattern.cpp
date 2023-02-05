#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n,0));
    int top=0;
    int right=n-1;
    int bottom=n-1;
    int left=0;
    int k=1;
    
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
        v[top][i]=k;
        k++;
        }
        top++;
        for(int i=top;i<=bottom;i++){
            v[i][right]=k;
            k++;
        }
        right--;
        
        for(int i=right;i>=left;i--){
            v[bottom][i]=k;
            k++;
        }bottom--;
        for(int i=bottom;i>=top;i--){
            v[i][left]=k;
            k++;
        }left++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }

    
}