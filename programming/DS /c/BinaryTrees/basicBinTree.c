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
int main(){
    struct Node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    /*
        1 
       / \
      2   3
     /

     */
     root->left->left=newNode(4);
     root->left->right=newNode(5);
}