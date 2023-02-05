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
void insertBST(struct node** root,int val){
    if((*root)==NULL){
        (*root)=newNode(val);
        return;
    }
    if(val<(*root)->data){

        insertBST((*root)->left,val);
    }
    if(val>(*root)->data){
        insertBST((*root)->right,val);
    }
    return;
}
void inOrder(struct node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
} 
int main(){
    struct node* root=NULL;
    insertBST(root,5);
    insertBST(&root,1);
    insertBST(&root,7);
    insertBST(&root,3);
    insertBST(&root,2);
    insertBST(&root,4);

    inOrder(root);
    printf("\n");
}