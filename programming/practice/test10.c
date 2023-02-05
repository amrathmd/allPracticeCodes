#include<stdio.h>
void merge(int arr[],int l,int r,int mid){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    int k=l;
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++){
        b[j]=arr[mid+j+1];
    }int i=0;
    int j=0;
    
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            
            arr[k]=a[i];
            k++;
            i++;
        }
        else{
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        i++;
        k++;

    }while(j<n2){
        arr[k]=b[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,r,mid);
    }
}
int main(){
    int arr[]={5,4,3,2,1};
    mergeSort(arr,0,5);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }printf("\n");
}