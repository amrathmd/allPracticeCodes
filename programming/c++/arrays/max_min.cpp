#include<iostream>
using namespace std;
int main(){
    int arraySize;
    cin>>arraySize;
    int list[arraySize];
    for(int i=0;i<arraySize;i++){
        cin>>list[i];
    }  
    int maxOfArray,minOfArray;
    maxOfArray=list[0];
    minOfArray=list[0];
    for(int i=0;i<arraySize;i++){
        if(maxOfArray<=list[i]){
            maxOfArray=list[i];
        }
       
    }
    for(int j=0;j<arraySize;j++){
         if(minOfArray>=list[j]){
            minOfArray=list[j];
        }
    }
    cout<<"the max of array :"<<maxOfArray<<"\n";
    cout<<"the min of array:"<<minOfArray<<"\n";
}