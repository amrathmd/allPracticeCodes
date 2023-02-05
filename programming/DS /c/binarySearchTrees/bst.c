#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};
void insert(struct node** root,int val){
    struct node* n=malloc(sizeof(struct node));
    n->data=val;
    n->left=NULL;
    n->right=NULL;
    if((*root)==NULL){
        (*root)=n;
        return;
    }
    if((*root)->data>val){
        insert((*root)->left,val);
    }
    else{
        insert((*root)->right,val);
    }
}