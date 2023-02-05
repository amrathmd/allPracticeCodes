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
int maxPath(node* root,int &maxi){
        if(root==NULL) return 0;
        int lsum=max(0,maxPath(root->left,maxi));
        int rsum=max(0,maxPath(root->right,maxi));
        maxi=max(maxi,lsum+rsum+root->data);
        return max(lsum,rsum)+root->data;
    }
    int findMaxSum(node* root)
    {
        // Your code goes here
        int maxi=INT_MIN;
        maxPath(root,maxi);
        return maxi;
        
    }
int main(){
    node* root=new node(1);
    root->left=new node(3);
    root->right=new node(7);
    root->right->left=new node(9);
    
    int res=findMaxSum(root);
    cout<<res<<endl;


}