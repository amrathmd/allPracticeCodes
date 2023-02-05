#include<stdio.h>
void linearSearch(int *arr,int key,int n){
    for(int i=0;i<10;i++){
        if(arr[i]==key){
            printf("key found at index:%d\n",i+1);
            return;
        }
    }printf("key not found!\n");
}
int main(){
    int arr[10];

    for(int i=0;i<10;i++){
        arr[i]=i+1;
    }
    linearSearch(arr,5,10);

}