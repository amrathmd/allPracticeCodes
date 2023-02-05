/*Given an array of n-NOOFINTERGERS integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that: 

    Each student gets one packet.
    The difference between the number of chocolates in the packet with maximum chocolates and packet with minimum chocolates given to the students is minimum.*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int choclateDistribution(int arr[],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int i=0;
    int min=INT_MAX;
    while(i<=n){
        int diff=(arr[i+m-1]-arr[i]);
        if(diff<0){
            diff=diff*-1;
        }
        if(min>diff){
            min=diff;
        }i=i+1;
    }return min;
}

int main(){
    int arr[]={12, 4, 7, 9, 2, 23, 25, 41, 
30, 40, 28, 42, 30, 44, 48, 
43, 50};
    int res=choclateDistribution(arr,17,7);
    cout<<res<<endl;
}