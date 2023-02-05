#include<stdio.h>
struct queue{
    int data;
    int priority;
};
struct queue q[10];
int size=-1;
void insert(int val,int priority){
    size++;
    q[size].data=val;
    q[size].priority=priority;
}
int priority(){
    int highest=-1;
    int ind=-1;
    for(int i=0;i<10;i++){
        if(q[i].priority>highest){
            highest=q[i].priority;
            ind=i;
        }else if(q[i].priority==highest){
            if(q[i].data>q[ind].data){
                highest=q[i].priority;
                ind=i;
            }
        }
        
    }return ind;
}
void peek(){
    int ind=priority();
    for(int i=0;i<size;i++){
        q[i]=q[i+1];
    }size--;
}
void display(){
    for(int i=0;i<=size;i++){
        printf("DATA:%d  ",q[i].data);
        printf("PRIORITY:%d\n",q[i].priority);
    }
}
int main(){
    insert(1,4);
    insert(2,3);
    insert(3,2);
    insert(4,1);
    display();
    peek();
    peek();
    peek();
    display();
    

}