#include<iostream>
#include "bits/stdc++.h"
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int height(struct node* root){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}
bool isBalanced(struct node* root){
    if(root==NULL){
        return true;
    }
    if(isBalanced(root->left)==false){
        return false;
    }
    if(isBalanced(root->right)==false){
        return false;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    struct node* root=new node(1);
    root->left=new node(2);
    root->left->left=new node(3);
    root->left->left->left=new node(4);
    root->right=new node(4);

    if(isBalanced(root)){
        cout<<"the Tree is balanced!"<<endl;
    }
    else{
        cout<<"imbalanced maaa!"<<endl;
    }

}