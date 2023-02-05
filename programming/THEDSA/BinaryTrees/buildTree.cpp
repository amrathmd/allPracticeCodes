#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
        node(int val){
            data=val;
            left=right=NULL;
        }
};
int search(int inOrder[],int curr,int start,int end){
    for(int k=start;k<=end;k++){
        if(inOrder[k]==curr){
            return k;
        }
    }return -1;
}
node* buildTree(int preOrder[],int inOrder[],int start,int end){
    static int ind=0;
    if(start>end){
        return NULL;
    }
    
    int curr=preOrder[ind];
    ind++;
    node* n=new node(curr);
    if(start==end){
        return n;
    }
    int pos=search(inOrder,curr,start,end);
    n->left=buildTree(preOrder,inOrder,start,pos-1);
    n->right=buildTree(preOrder,inOrder,pos+1,end);
    return n;
}

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
int main(){
    int preOrder[]={1,2,4,3,5};
    int inOrder[]={4,2,1,5,3};
    node* root=buildTree(preOrder,inOrder,0,4);
    inorder(root);
}