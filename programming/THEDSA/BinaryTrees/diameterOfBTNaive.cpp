#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;left=NULL;right=NULL;
    }
};
int height(node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=height(root->left);
    int rheight=height(root->right);

    return max(lheight,rheight)+1;
}
int diameter(node* root){
    static int maxDia=-1;
    if(root==NULL) return 0;
    int lheight=height(root->left);
    int rheight=height(root->right);
    int dia=lheight+rheight;
    return maxDia=max(maxDia,dia);
    return diameter(root->left);
    return diameter(root->right);
    


}
int main() {

  struct node * root = new node(1);
  root -> left = new node(2);
  root->right=new node(3);
  root->right->right=new node(5);
  root->right->right->right=new node(7);
  root->right->left=new node(4);
  root->right->left->left=new node(6);
  root->right->left->left->left=new node(7);
  root->right->right->left=new node(8);

  int res=diameter(root);
  cout<<res+1<<endl;
}
//better approach will be like taking postOrder traversal for diameter and height of binary tree and taking the maximum diameter to all nodes
//which will be O(n);
//link:https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=diameter-of-binary-tree