
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
struct node* insertBST(struct node* root,int val){
    if(root==NULL){
        return newNode(val);
    }
    if(val<root->data){
        root->left=insertBST(root->left,val);
    }
    if(val>root->data){
        root->right=insertBST(root->right,val);
    }
    return root;
}
struct node* searchInBST(struct node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    if(key < root->data){
        return searchInBST(root->left,key);
    }
    else{
        return searchInBST(root->right,key);
    }
    return root;
}
struct node* inOrderSucc(struct node* root){
    struct node* curr=root;
    while(curr && curr->left!=NULL){
        curr=curr->left;
    }
    return root;
}
struct node* deleteInBST(struct node* root,int key){
    if(key < root->data){
        root->left=deleteInBST(root->left,key);
    }
    else if(key > root->data){
        root->right=deleteInBST(root->right,key);
    }
    else{
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
            struct node* temp=inOrderSucc(root->right);
            root->data=temp->data;
            root->right=deleteInBST(root->right,temp->data);

        }
    }return root;
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
    struct node* root=NULL;
    root=insertBST(root,5);
    insertBST(root,1);
    insertBST(root,7);
    insertBST(root,3);
    insertBST(root,2);
    insertBST(root,4);

    inOrder(root);
    printf("\n");
    if(searchInBST(root,13)!=NULL){
        printf("key found!\n");
    }
    else{
        printf("key not Found!\n");
    }
    root=deleteInBST(root,5);
    inOrder(root);
    printf("\n"); 


}