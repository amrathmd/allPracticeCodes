#include<stdio.h>
#include <stdlib.h>
#include<ctype.h>
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
struct stack{
    struct node* arr[10];
}s;
int top=-1;
void push(struct node* root){
    top++;
    s.arr[top]=root;
}
struct node* pop(){
    return s.arr[top];
}
int isempty(){
    if(top==-1){
        return 1;
    }
    else {
        return 0;
    }
}
void preOrder(struct node* root){
    struct node* curr=root;
    int done=0;
    while(!done){
        while(curr!=NULL){
            printf("%d ",curr->data);
            if(curr->right)
                push(curr->right);
            curr=curr->left;
        }
        if(!isempty()){
            curr=pop();
            top--;
        }
        else
            done=1;

    }

    
}
void preorder(struct node* root){
    if(root==NULL){
        return;
    }printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
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
    printf("preOrder using stack\n");
    preOrder(root);
    printf("preorder using recursion\n");
    preorder(root);
    printf("\n");
}