#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int list[size];
    cout<<"Enter elements into the array:";
    for(int i=0;i<size;i++){
        cin>>list[i];
    }
    for(int i=0;i<size;i++){
        for (int j=0;j<size-i;j++){
            if(list[j]>list[j+1]){
                int temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }cout<<"the soreted array is :";
    for(int i=0;i<size;i++){
        cout<<list[i]<<" ";
    }
}