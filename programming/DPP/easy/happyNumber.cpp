#include<bits/stdc++.h>
using namespace std;
bool isHappy(int n) {
        set<int>s;
        while(s.find(n)==s.end()){
            cout<<n<<" ";
            s.insert(n);
            int rem=0;
            int sum=0;
            while(n>0){
                rem=n%10;
                sum=sum+(rem*rem);
                n=n/10;
            }
            if(sum==1) return true;
            
            else n=sum;
            
            
        }return false;
    }
int main(){
    cout<<isHappy(19);
}

