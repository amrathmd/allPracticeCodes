#include<iostream>

using namespace std;

struct Minmax{
    int min;
    int max;
};
Minmax getMinMax(int arr[],int n){
    struct Minmax minmax;
    int i=2;
    if(n%2==0){
        if(arr[0]>arr[1]){
            minmax.min=arr[1];
            minmax.max=arr[0];
        }
        else{
            minmax.min=arr[0];
            minmax.max=arr[1];
        }
    }
    else{
        minmax.min=minmax.max=arr[0];
    }

    while(i<n-1){
        if(arr[i]>arr[i+1]){
            if(arr[i]>minmax.max){
                minmax.max=arr[i];
            }
            if(arr[i+1]<minmax.min){
                minmax.min=arr[i+1];
            }
        }else{
            if(arr[i+1]>minmax.max){
                minmax.max=arr[i+1];
            }
            if(arr[i]<minmax.min){
                minmax.min=arr[i];
            }
        }i++;
    }return minmax;
}

int main(){
    int arr[]={60,120,3080,1,3,9,14,100000,0,-1};
    struct Minmax result=getMinMax(arr,10);
    cout<<result.min<<" "<<result.max;
}

