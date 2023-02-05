#include<iostream>
#include<bits/stdc++.h>
struct node{
    int data;
    struct node *left,*right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int max(node* root){
    if(root==NULL){
        return 0;
    }
    int res=root->data;
    int maxl=max(root->left);
    int maxr=max(root->right);
    res=max(maxl,maxr);
    return res;

}
bool isBST(node* root){
    int maxL=max(root->left);
    int maxR=min(root->right);

    if(maxL<root->data && maxR>root->data){
        return true;
    }
    return false;
}
int main(){
    struct node* root=new node(3);
    root->left=new node(2);
    root->left->left=new node(1);
    root->right=new node(7);
    root->right->left=new node(5);
    root->right->right=new node(8);
    printf("%d\n",max(root));

}