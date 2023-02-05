#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* newNode(int val){
    struct Node* n=malloc(sizeof(struct Node));
    n->data=val;
    n->left=NULL;
    n->right=NULL;
}
int height(struct Node* root){
    if(root==NULL)
        return 0;
    
    else{
        int lheight=height(root->left);
        int rheight=height(root->right);

        if(lheight>rheight)
            return lheight+1;
        else
            return rheight+1;

    }
}
int main(){
    struct Node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
   /*  root->left->left=newNode(4);
    root->left->right=newNode(5); */
    printf("%d\n",height(rootz));

} 
