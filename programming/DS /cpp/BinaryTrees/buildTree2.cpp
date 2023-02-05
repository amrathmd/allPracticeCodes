#include<iostream>
using namespace std;
//postOrder and inOrder
struct node{
    int data;
    struct node * left;
    struct node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int search(int inOrder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inOrder[i]==curr){
            return i;
        }
    }return -1;
}
node* buildTree(int postOrder[],int inOrder[],int start,int end){
    static int idx=4;
    if(start>end){
        return NULL;
    }
    
    int curr=postOrder[idx];
    idx--;
    node* n=new node(curr);
    if(start==end){
        return n;
    }

    int pos=search(inOrder,start,end,curr);
    n->right=buildTree(postOrder,inOrder,pos+1,end);
    n->left=buildTree(postOrder,inOrder,start,pos-1);
    
    return n;
}

void inOrderPrint(node* root){
    if(root==NULL){
        return ;
    }
    inOrderPrint(root->left);
    cout<<root->data<<" ";
    inOrderPrint(root->right);
}
int main(){
    int postOrder[]={4,2,5,3,1};
    int inOrder[]={4,2,1,5,3};
    node* n=buildTree(postOrder,inOrder,0,4);
    inOrderPrint(n);
}