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
struct node* buildBST(struct node* root,int val){
    if((root)==NULL){
        return newNode(val);
    }
    if(val<(root)->data){
        (root)->left=buildBST((root)->left,val);
    }
    if(val>(root)->data){
        (root)->right=buildBST((root)->right,val);
    }
    return root;

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
    root=buildBST(root,5);
    buildBST(root,1);
    buildBST(root,7);
    buildBST(root,3);
    buildBST(root,2);
    buildBST(root,4);

    inOrder(root);
    printf("\n");
}