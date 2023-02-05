#include<iostream>
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
    if(root==NULL){
        return new node(val);
    }
    if(val<root->data){
        root->left=insertBST(root->left,val);
    }else{
        root->right=insertBST(root->right,val);
    }
}


void inOrder(struct node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main(){
    struct node* root=NULL;
    int arr[]={5,1,3,4,2,7};
    for(int i=0;i<6;i++){
        insertBST(root,arr[i]);
    }inOrder(root);
    
}