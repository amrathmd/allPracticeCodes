#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
struct node* newNode(int val){
    struct node* n=malloc(sizeof(struct node));
    n->data=val;
    n->left=NULL;
    n->right=NULL;
    return n;
}
struct node* insert(struct node* root,int val){
    if(root==NULL){
        return newNode(val);
    }
    if(root->left==NULL && root->right==NULL )
        root->left=insert(root->left,val);

    if(root->right==NULL && root->left!=NULL)
        root->right=insert(root->right,val);
    
    return root;
}
void preOrder(struct node* root){
    if(root==NULL){
        return;
    }
    printf("%d ",root->data);
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    struct node* root=NULL;
    root=insert(root,1);
    insert(root,2);
    insert(root,3);
    insert(root,4);
    insert(root,5);
    preOrder(root);


}