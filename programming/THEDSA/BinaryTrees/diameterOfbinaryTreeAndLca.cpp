#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
vector<int>path1,path2;
vector<int >lcaPath;
bool findPathLca(Node* root,int lca){
    lcaPath.push_back(root->data);
    if(root==NULL) return false;
    if(root->data==lca) return true;
    if(root->left && findPathLca(root->left,lca) || root->right && findPathLca(root->right,lca)) return true;
    lcaPath.pop_back();
    return false;
}
bool findPath(Node* root,vector<int>&path,int k){
    if(root==NULL) return NULL;
    path.push_back(root->data);
    if(root->data==k) return true;
    if(root->left && findPath(root->left,path,k) || findPath(root->right,path,k)) return true;
    path.pop_back();
    return false;
}
int lca(Node* root,int n1,int n2){
    
       int i=0;
      
       if( !findPath(root,path2,n2) || !findPath(root,path1,n1)){
           
           return -1;
       }
       while(path1[i]==path2[i]) i++;
       return path1[i-1];
}
int diameter(Node* root,int n1,int n2){
    int a=path1.size();
    int b=path2.size();
    int c=lcaPath.size();
    return a+b-2*c;

}
int main(){
    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<diameter(root,5,6)<<endl;

}