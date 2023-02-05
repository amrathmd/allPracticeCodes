#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};
struct node* creatnode(int val){
    struct node* n=malloc(sizeof(struct node));
    n->data=val;
    n->left=NULL;
    n->right=NULL;
    return n;
}
struct queue{
    struct node* arr[10];
}q;
int front=-1;
int rear=-1;
void enqueue(struct node* root){
    if(front==-1){
        front=rear=0;
        q.arr[rear]=root;
    }
        
    else{
        rear++;
        q.arr[rear]=root;
    }
}
void dequeue(){
    if(front==rear){
        front=rear=-1;
    }
    else {
        front++;
    }
}
int isempty(){
    if(front==-1 && rear==-1){
        return 1;
    }
    else{
        return 0;
    }
}
struct node* insertion(struct node* root,int data){
    if(root==NULL){
        root=creatnode(data);
        return root;
    }
    enqueue(root);
    
    while(!isempty()){
        struct node* temp=q.arr[front];
        dequeue();
        if(temp->left!=NULL){
            enqueue(temp->left);
        }else{
            temp->left=creatnode(data);
            return root;
        }
        if(temp->right!=NULL){
            enqueue(temp->right);
        }else{
            temp->right=creatnode(data);
            return root;
        }
    }return root;
}
struct node* search(struct node* root,int val){
    if(root==NULL || root->data==val){
        return root;
    }
    struct node* temp=NULL;
    if(root->left!=NULL){
        temp=search(root->left,val);
        if(temp)
            return temp;
    }
    else if(root->right!=NULL){
        temp=search(root->right,val);
        if(temp)
            return temp;
    }
    return temp;

    
}
struct node* deletion(struct node* root,int val){
    if(root==NULL){
        return root;
    }
    if(root->left!=NULL){
        root->left=deletion(root->left,val);
    }
    else if(root->right!=NULL){
        root->right=deletion(root->right,val);
    }
    else{
        if(root->left==NULL){
            struct node *temp=root->right;
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
    }return root;
}
void inorder(struct node* root){
    if(root==NULL){
        return;
    }inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
int main(){
    struct node* root=NULL;
    root=insertion(root,1);
    insertion(root,2);
    insertion(root,3);
    insertion(root,4);
    inorder(root);
    if(search(root,4)!=NULL){
        printf("The value found");
    }else{
        printf("THe value not found");
    }printf("\n");
    deletion(root,2);
    inorder(root);

}