#include<iostream>
#include "bits/stdc++.h"
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void printLevelOrder(Node* root){
    if(root == NULL){
        return;
    }queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* n=q.front();
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
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);

    /*
        1 
       / \ 
      2   3
     /

     */
    root->right->left=new Node(5);
    root->right->right=new Node(7);
    
    root->left->left=new Node(4);
    root->left->right=new Node(6);
     printLevelOrder(root);
     
}