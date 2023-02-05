#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    for(int i=a;i<b;i++){
        int count=0;
        for (int j=i;j<(i/2);j++){
            if(i%j==0){
                count++;
                break;
            }
        }if(count==1){
            cout<<i<<endl;
        }
    }
}