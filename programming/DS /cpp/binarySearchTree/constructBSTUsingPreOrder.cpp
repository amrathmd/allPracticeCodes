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
node* constructBST(int preOrder[],int* preOrderIdx,int key,int min,int max,int n){
    if(*preOrderIdx>=n){
        return NULL;
    }
    if(key>min && key<max){
        node* root=new node(key);
        *preOrderIdx+=1;

        if(*preOrderIdx!=n){
            root->left=constructBST(preOrder,preOrderIdx,preOrder[*preOrderIdx],min,key,n);
        }
        if(*preOrderIdx!=n){
            root->right=constructBST(preOrder,preOrderIdx,preOrder[*preOrderIdx],key,max,n);
        }
        return root;
    }return NULL;
}
void PreOrder(node* root){
    if(root==NULL){
        return ;
    }
    printf("%d ",root->data);
    PreOrder(root->left);
    PreOrder(root->right);
}
int main(){
    int preOrder[]={7,5,4,6,8,9};
    int n=6;
    int preOrderIdx=0;
    node* root=constructBST(preOrder,&preOrderIdx,preOrder[0],INT_MIN,INT_MAX,n);
    PreOrder(root);

}
