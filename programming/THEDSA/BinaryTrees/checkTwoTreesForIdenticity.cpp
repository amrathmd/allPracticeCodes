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
bool check(node* root1,node* root2){
    if(root1==NULL && root2==NULL) return true;
    else if(root1==NULL || root2==NULL) return false;
        
    return (root1->data==root2->data) && check(root1->left,root2->left) && check(root1->right,root2->right);
    
}
int main(){
    node* root=new node(1);
    root->left=new node(3);
    root->right=new node(7);
    root->right->left=new node(9);
    node* root2=new node(1);
    root2->left=new node(3);
    root2->right=new node(7);
    root2->right->left=new node(9);
    cout<<check(root,root2)<<endl;
    
}