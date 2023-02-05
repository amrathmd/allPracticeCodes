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
node* insertBST(struct node* root,int val){
    if(root==NULL)
        return new node(val);
    
    if(val<root->data)
        root->left=insertBST(root->left,val);
    else
        root->right=insertBST(root->right,val);
    return root;
}


void inOrder(struct node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void printLevelOrder(node* root){
    if(root == NULL){
        return;
    }queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* n=q.front();
        q.pop();
        if(n!=NULL){
            cout<<n->data<<" ";
            if(n->left)
                q.push(n->left);
            if(n->right)
                q.push(n->right);
        }else if(!q.empty()){
            q.push(NULL);
        }
    }
}
int main(){
    struct node* root=NULL;
    int arr[]={1,3,4,2,7};
    root=insertBST(root,5);
    for(int i=0;i<5;i++){
        insertBST(root,arr[i]);
    }insertBST(root,8);
    printLevelOrder(root);
    cout<<endl;
    
}