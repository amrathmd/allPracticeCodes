#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
struct queue{
    struct node* arr[10];
    
};
struct queue q;
int front=-1;
int rear=-1;


void enqueue(struct node* val){
    if(front==-1 && rear==-1){
        front=rear=0;
        q.arr[rear]=val;
    }
    else{
        q.arr[++rear]=val;
    }
}

void dequeue(){
    if(front<rear){
        front++;
    }
    else if(front==rear){
        front=rear=-1;
    } 
}
int empty(){
    if(front==-1 && rear==-1){
        return 1;
    }
    else{
        return 0;
    }
}

struct node* newNode(int val){
    struct node* n=malloc(sizeof(struct node));
    n->data=val;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void levelOrderTraversal(struct node* root){
    if(root==NULL){
        return;
    }
    enqueue(root);
    enqueue(NULL);
    while(!empty()){
        struct node* n=q.arr[front];
        dequeue();
        if(n!=NULL){
            printf("%d ",n->data);
            if(n->left){
                enqueue(n->left);
            }

            if(n->right){
                enqueue(n->right);
            }
        }else if(!empty()){
            enqueue(NULL);
        }

    }

}
int main(){
    struct node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    levelOrderTraversal(root);

}