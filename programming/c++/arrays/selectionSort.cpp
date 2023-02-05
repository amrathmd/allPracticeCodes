#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int list[size];
    cout<<"Enter Elements into the array:";
    for(int i=0;i<size;i++){
        cin>>list[i];
    }
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(list[j]<=list[i]){
                int temp=list[j];
                list[j]=list[i];
                list[i]=temp;
            }
        }
    }cout<<"the sorted array is: ";
    for(int i=0;i<size;i++){
        cout<<list[i];
    }
}