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
void levelOrderTraversal(node* root){
    if(root==NULL) return;
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        node* curr=q.front();
        q.pop();
        if(curr==NULL){
            q.push(NULL);
        }
        else{
            
            if(curr->right) q.push(curr->right);
            cout<<curr->data<<" ";
        }
    }


}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    levelOrderTraversal(root);
    cout<<endl;
}