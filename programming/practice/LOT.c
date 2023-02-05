#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};
struct node* creatnode(int val){
    struct node* n=malloc(sizeof(struct node));
    n->data=val;
    n->left=NULL;
    n->right=NULL;
    return n;
}
struct queue{
    struct node* arr[10];
}q;
int front=-1;
int rear=-1;
void enqueue(struct node* root){
    if(front==-1){
        front=rear=0;
        q.arr[rear]=root;
    }
        
    else{
        rear++;
        q.arr[rear]=root;
    }
}
void dequeue(){
    if(front==rear){
        front=rear=-1;
    }
    else {
        front++;
    }
}
int isempty(){
    if(front==-1 && rear==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void levelOrderTraversal(struct node* root){
    if(root==NULL)
        return;
    enqueue(root);
    enqueue(NULL);
    while(!isempty()){
        struct node* n=q.arr[front];
        dequeue();
        if(n!=NULL){
            printf("%d ",n->data);
            if(n->left)
                enqueue(n->left);
            if(n->right)
                enqueue(n->right);
        }
        else if(!isempty()){
            enqueue(NULL);
        }
    }
}
int main(){
    
    struct node* root=NULL;
    root=creatnode(1);
    root->left=creatnode(2);
    root->right=creatnode(3);
    root->left->left=creatnode(4);
    root->left->right=creatnode(5);
    root->right->left=creatnode(6);
    root->right->right=creatnode(7);
    printf("levelOrder using stack\n");
    levelOrderTraversal(root);
    

}