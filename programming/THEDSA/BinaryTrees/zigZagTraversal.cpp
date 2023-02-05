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
vector <int> zigZagTraversal(node* root)
    {
    	// Code here
    	vector<int>res;
		vector<int>temp;
    	if(root==NULL) return res;
    	queue<node*>q;
    	q.push(root);
		bool leftToRight=true;
		while(!q.empty()){
			int size=q.size();
			for(int i=0;i<size;i++){
				node* curr=q.front();
				q.pop();
				temp.push_back(curr->data);
				if(root->left) q.push(curr->left);
				if(curr->right) q.push(curr->right);
			}if(leftToRight){
				reverse(temp.begin(),temp.end());
				res.insert(res.end(),temp.begin(),temp.end());
				temp.clear();
				leftToRight=!leftToRight;
			}
			else{
				res.insert(res.end(),temp.begin(),temp.end());
				temp.clear();
				leftToRight=true;
			}
		}return res;
    	
    }
int main(){
  struct node * root = new node(1);
  root -> left = new node(2);
  root -> left -> left = new node(4);
  root -> left -> right = new node(5);
  root -> right = new node(3);
  root -> right -> left = new node(6);
  root -> right -> right = new node(7);
  vector<int>v=zigZagTraversal(root);
  for(auto it:v){
    cout<<it<<" ";
  }
}