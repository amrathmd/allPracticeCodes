#include<bits/stdc++.h>
using namespace std;
int sqrt(int x){
    int l=1;
    int r=INT_MAX-1;
    while(1){
        int mid=l+r/2;
        if(mid > x/mid) {
            r=mid;
        }
        if(mid+1 < x/mid+1){
            l=mid+1;
            if(l+1 < x/l+1){
                return l;
            }
        }

        
    }
}
int main(){
    cout<<sqrt(101);
}