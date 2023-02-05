#include<stdio.h>
#include <stdlib.h>
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
void postOrder(struct node* root){
    struct node* curr=root;
    int done=0;
    while(!done){
        if(curr!=NULL){
            push(curr);
            if(curr->right)
                push(curr->right);
            curr=curr->left;
        }else{
            if(!isempty()){
                curr=pop();
                top--;
                printf("%d ",curr->data);
            }
            else{
                done=1;
            }
        }
    }
}
void postorder(struct node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
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
    printf("inOrder using stack\n");
    postOrder(root);
    printf("inorder using recursion\n");
    postorder(root);
    printf("\n");
}