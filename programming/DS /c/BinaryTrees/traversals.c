#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* newNode(int val){
    struct Node* n=malloc(sizeof(struct Node));
    n->data=val;
    n->left=NULL;
    n->right=NULL;
}
void preOrder(struct Node* root){
    if(root==NULL){
        return;
    }
    printf("%d ",root->data);
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(struct Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);

}
void postOrder(struct Node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ",root->data);


}
int main(){
    struct Node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    root->right->left=newNode(6);
    root->right->right=newNode(7);
    preOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");
    inOrder(root);
    
}