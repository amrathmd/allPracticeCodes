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
int search(int inOrder[],int postOrder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inOrder[i]==curr) return i;
    }return -1;
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}
node* buildTree(int inOrder[],int postOrder[],int start,int end){
    static int idx=end;
    if(start>end) return NULL;
    int curr=postOrder[idx];
    idx--;
    node* n=new node(curr);
    if(start==end) return n;
    int pos=search(inOrder,postOrder,start,end,curr);
     n->right=buildTree(inOrder,postOrder,pos+1,end);
    n->left=buildTree(inOrder,postOrder,start,pos-1);
   
    return n;
}
int main(){
    int inOrder[]={4,2,1,5,3};
    int postOrder[]={4,2,5,3,1};
    node* n=buildTree(inOrder,postOrder,0,4);
    inorder(n);
}