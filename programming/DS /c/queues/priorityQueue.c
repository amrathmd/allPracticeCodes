#include<stdio.h>
struct queue{
    int data;
    int priority;
};
struct queue arr[100];
int size=-1;
void insert(int data,int prior){
    size++;
    arr[size].priority=prior;
    arr[size].data=data;
}
int  peek(){
    int highestpriority=-1;
    int ind=-1;
    for(int i=0;i<=size;i++){
         if(arr[i].priority>highestpriority){
        highestpriority=arr[i].priority;
        ind=i;
        }
        else if(arr[i].priority==highestpriority && ind>-1){
            if(arr[i].data>arr[ind].data)
        {
                highestpriority=arr[i].priority;
                ind=i;
            }       
        }
    }return ind;
}
void delete(){
    int ind=peek();
    for(int i=0;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
}
int main(){
    insert(1,0);
    insert(2,2);
    insert(3,3);
    insert(4,3);
    int ind=peek();
    printf("%d\n",arr[ind].data);
    delete();
    int ind2=peek();
    printf("%d\n",arr[ind2].data);

}
