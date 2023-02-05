#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left,*right;

};
int height(struct node* );
struct node* newNode(int val){
    struct node* n=malloc(sizeof(struct node));
    n->data=val;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void printLevel(struct node* root,int level){
    if(root==NULL){
        return;
    }
    if(level==0){
        printf("%d ",root->data);
    }
    else{
        printLevel(root->left,level-1);
        printLevel(root->right,level-1);
    }
}
void printLevelOrder(struct node* root){
    int h=height(root);
    for(int i=0;i<h;i++){
        printf("\n");
        printLevel(root,i);
    }
}
int height(struct node* root){
    if(root==NULL){
        return 0;
    }
    else{
        int lheight=height(root->left);
        int rheight=height(root->right);

        if(lheight>rheight){
            return lheight+1;
        }
        else{
            return rheight+1;
        }
    }
}
int main(){
    struct node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    printf("%d\n",height(root));
    printLevelOrder(root);
}