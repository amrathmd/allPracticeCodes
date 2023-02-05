#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int list[size];
    for(int i=0;i<size;i++){
        cin>>list[i];
    }
        for (int i=0;i<size;i++){  
            int sum=0; 
            for (int j=i;j<size;j++){
                sum=sum+list[j];
                cout<<sum<<endl;
        }cout<<endl;
    } 
    
}