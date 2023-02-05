#include<bits/stdc++.h>
using namespace std;
int gasStation(int gas[],int cost[],int n){
    for(int i=0;i<n;i++){
        int fuel=gas[i];
        int check=1;
        for(int j=0;j<n;j++){
            int presentStation=(i+j)%n;
            int nextStation=(presentStation+1)%n;
            fuel=fuel-cost[presentStation];
            if(fuel<0){
                check=0;
                break;
            }
            fuel=fuel+gas[nextStation];
        }if(check==1){
            return i;
        }
    }return -1;
}
int main(){
    int gas[]={1,2,3,4,5};
    int cost[]={3,4,5,1,2};
    int n=5;
    cout<<gasStation(gas,cost,5)<<endl;
}
