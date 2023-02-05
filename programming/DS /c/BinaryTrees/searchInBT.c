#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
struct node* newNode(int val){
    struct node* n=malloc(sizeof(struct node));
    n->data=val;
    n->left=NULL;
    n->right=NULL;
    return n;

}
struct node* searchInBT(struct node* root,int val){
  
   if(root->data==val || root==NULL){
       return root;
   }
    struct node *temp=NULL;
   if(root->left!=NULL){
       temp= searchInBT(root->left,val);
       if(temp)
        return temp;
   }
   if(root->right!=NULL){
       temp=searchInBT(root->right,val);
       if(temp)
        return temp;
   }
   return temp;

}

int main(){
    struct node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    if(searchInBT(root,33)!=NULL){
        printf("key found");
    }

    else{
        printf("key not FOund!");
    }
}