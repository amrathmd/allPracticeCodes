#include<iostream>
#include<vector>
using namespace std;
struct node{
    int data;
    struct node *left,*right;

    node(int val){
        data=val;
        left=right=NULL;
    }
};
vector<node*> constructBST(int start,int end){
    vector<node*> trees;
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }
    
    for(int i=0;i<end;i++){
        vector<node*> leftSubtree=constructBST(start,i-1);
        vector<node*> rightSubTree=constructBST(i+1,end);

        for(int j=0;j<leftSubtree.size();j++){
            node* left=leftSubtree[j];
            for(int k=0;k<rightSubTree.size();k++){
                node* right=rightSubTree[k];
                node* root=new node(i);
                root->left=left;
                root->right=right;
                trees.push_back(root);

            }
        }
    }return trees;
}
void preOrder(struct node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"";
    preOrder(root->left);
    preOrder(root->right);
}
int main(){
    vector<node*> totalTrees=constructBST(1,3);
    for(int i=0;i<totalTrees.size();i++){
        cout<<i+1<<":";
        preOrder(totalTrees[i]);
    }
}