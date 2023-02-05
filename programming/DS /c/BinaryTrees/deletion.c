#include<stdio.h>
#include<stdlib.h>
struct  node{
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
struct node* deletion(struct node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        if(root->left==NULL){
            struct node* temp=root->right;
            free(root);
            return temp;
            
        }
        else if(root->right==NULL){
            struct node* temp=root->left;
            free(root);
            return temp;
        }
        else{
            struct node* temp=root->right;
            root->data=temp->data;
            root->right=deletion(root->right,temp->data);
        }

    }
    root->left=deletion(root->left,key);
    root->right=deletion(root->right,key);
    return root;
}
void inOrder(struct node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
}
int main(){
    struct node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    inOrder(root);
    printf("\n");
    root=deletion(root,2);
    inOrder(root);
    printf("\n");

}