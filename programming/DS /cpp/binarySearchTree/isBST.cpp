#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left,*right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int maximum(node* root){
    if(root==NULL){
        return 0;
    }
    int res=root->data;
    int maxl=maximum(root->left);
    int maxr=maximum(root->right);
    if(maxl>res){
        res=maxl;
    }
    if(res<maxr){
        res=maxr;
    }
    return res;

}
int minimum(node* root){
    if(root==NULL){
        return INT_MAX;
    }
    int res=root->data;
    int minl=minimum(root->left);
    int minr=minimum(root->right);
    if(minl<res){
        res=minl;
    }
    if(minr<res){
        res=minr;
    }
    return res;


}
bool isBST(node* root){
    int maxL=maximum(root->left);
    int maxR=minimum(root->right);

    if(maxL<root->data && maxR > root->data){
        return true;
    }
    return false;
}
int main(){
    struct node* root=new node(4);
    root->left=new node(2);
    root->left->left=new node(1);
    root->right=new node(7);
    root->right->left=new node(5);
    root->right->right=new node(8);
    cout<<isBST(root)<<endl;

}
