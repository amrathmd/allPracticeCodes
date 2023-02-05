#include<iostream>
#include<vector>
using namespace std;
void linearSearch(int *arr,int key,int n){
    for(int i=0;i<10;i++){
        if(arr[i]==key){
            cout<<"key found at index"<<i+1<<endl;
            return;
        }
    }cout<<"key not found!"<<endl;
}
int main(){
    int arr[10];

    for(int i=0;i<10;i++){
        arr[i]=i+1;
    }
    linearSearch(arr,20,10);

}