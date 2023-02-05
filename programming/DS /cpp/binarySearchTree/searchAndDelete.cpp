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
node* searchBST(struct node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(key==root->data){
        return root;
    }
    if(key<root->data){
         return searchBST(root->left,key);
    }
    else{
        return searchBST(root->right,key);
    }
    return root;
}
node* inOrderSucc(struct node* root){
    node* curr=root;
    while(curr && curr->left!=NULL){
        curr=curr->left;
    }return root;
}
node* deleteBST(struct node* root,int key){
    if(key<root->data){
        root->left=deleteBST(root->left,key);
    }
    else if(key>root->data){
        root->right=deleteBST(root->right,key);
    }
    else{
        if(root->left==NULL){
            node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            node* temp=root->left;
            free(root);
            return temp;
        }
        else{
            node* temp=inOrderSucc(root->right);
            root->data=temp->data;
            root->right=deleteBST(root->right,temp->data);

        }

    }return root;
}
int main(){
    struct node* root=NULL;
    int arr[]={1,3,4,2,7};
    root=insertBST(root,5);
    for(int i=0;i<5;i++){
        insertBST(root,arr[i]);
    }insertBST(root,8);
    if(searchBST(root,10)==NULL){
        cout<<"keu NOT found"<<endl;
    }
    else{
        cout<<"key Found!"<<endl;
    }
    inOrder(root);
    cout<<endl;
    root=deleteBST(root,5);
    inOrder(root);
    
}
