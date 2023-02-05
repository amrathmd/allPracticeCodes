#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};
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
    }else{
        return 0;
    }
}
struct node* creatnode(int val){
    struct node* n=malloc(sizeof(struct node));
    n->data=val;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void inOrder(struct node* root){
    struct node* curr=root;
    struct node* temp=NULL;
    int done=0;
    while(!done){
        if(curr!=NULL){
            push(curr);
            curr=curr->left;
        }
        else{
            if(!isempty()){
                curr=pop();
                top--;
                printf("%d ",curr->data);
                curr=curr->right;
            }else{
                done=1;
            }
        }
    }
}
void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
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
    inOrder(root);
    printf("inorder using recursion\n");
    inorder(root);
    printf("\n");
}