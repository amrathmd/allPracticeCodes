#include<iostream>
#include<vector>
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
using namespace std;

int main(){
    int m,n;
    cin>>n;//vertices
    cin>>m;//edges
    vvi adjm(n+1,vi(n+1,0));
    rep(i,0,m){
        int x,y;
        cin>>x>>y;
        adjm[x][y]=1;
        adjm[y][x]=1;
    }
    cout<<"adjacency matrix:"<<endl;
    rep(i,1,n+1){
        rep(j,1,n+1){
            cout<<adjm[i][j];
        }cout<<endl;
    }
    

    
    

}
