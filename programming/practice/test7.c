#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
struct queue{
    struct node* arr[100];
}q;
int front=-1;
int rear=-1;
struct node* creatNode(int val){
    struct node* n=malloc(sizeof(struct node));
    n->data=val;
    n->left=n->right=NULL;
    return n;
}
void enqueue(struct node* root){
    if(front==-1){
        front=rear=0;
        q.arr[rear]=root;
    }else{
        rear++;
        q.arr[rear]=root;
    }
}
void dequeue(){
    if(front==rear){
        front=rear=-1;
    }else{
        front++;
    }
}int isempty(){
    if(front==-1 && rear==-1){
        return 1;
    }else{
        return 0;
    }
}
struct node* insertion(struct node* root,int val){
    if(root==NULL){
        root=creatNode(val);
        return root;
    }
    enqueue(root);
    while(!isempty()){
        struct node* n=q.arr[front];
        dequeue();
        if(n->left!=NULL){
            enqueue(n->left);
        }else{
            n->left=creatNode(val);
            return root;
        }if(n->right!=NULL){
            enqueue(n->right);
        }else{
            n->right=creatNode(val);
            return root;
        }
    }return root;
}
struct node* deletion(struct node* root,int val){
    if(root==NULL){
        return NULL;
    }
    if(root->data==val){
        if(root->left==NULL){
            struct node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            struct node* temp=root->left;
            free(root);
            return temp;
        }
        else{
            struct node* temp=root->right;
            root->data=temp->data;
            root->right=deletion(root->right,temp->data);
        }
    }root->left=deletion(root->left,val);
    root->right=deletion(root->right,val);
    return root;
}
void inorder(struct node* root){
    if(root==NULL){
        return;
    }inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
int main(){
    struct node* root=NULL;
    root=insertion(root,1);
    insertion(root,2);
    insertion(root,3);
    insertion(root,4);
    deletion(root,3);
    inorder(root);
}
