#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
struct queue{
    struct node* arr[100];
}q;
int front=-1;
int rear=-1;
void enqueue(struct node* root){
    if(front==-1){
        front=rear=0;
        q.arr[rear]=root;
    }else{
        rear++;
        q.arr[rear]=root;
    }
}void dequeue(){
    if(front==rear){
        front=rear=-1;
    }else{
        front++;
    }
}
int isempty(){
    if(front==-1){
        return 1;
    }else{
        return 0;
    }
}
struct node* creatNode(int val){
    struct node* n=malloc(sizeof(struct node));
    n->data=val;
    n->left=n->right=NULL;
   
    return n;
}
int maximum(struct node* root){
    if(root==NULL){
        return 0;
    }
    int res=root->data;
    int maxr=maximum(root->right);
    int maxl=maximum(root->left);
    if(maxr>maxl){
        res=maxr;
    }else{
        res=maxl;
    }
    

}
int minimum(struct node* root){
    if(root==NULL){
        return __INT_MAX__;
    }
    int res=root->data;
    int minr=minimum(root->right);
    int minl=minimum(root->left);
    if(minr<minl){
        res=minr;
    }else{
        res=minl;
    }return res;
}
struct node* inOrderSuccessor(struct node* root){
    struct node* curr=root;
    while(curr!=NULL && curr->left!=NULL){
        curr=curr->left;
    }return root;
}
struct node* insert(struct node* root,int val)
{
    if(root==NULL){
        root=creatNode(val);
        return root;
    }if((root->data)<val){
        root->right=insert(root->right,val);
    }else if((root->data)>val){
        root->left=insert(root->left,val);
    }
    return root;

}
struct node* search(struct node* root,int val){
    if(root==NULL || root->data==val){
        return root;
    }
    if(root->data<val){
        return search(root->right,val);
    }else if(root->data>val){
        return search(root->left,val);
    }return root;
}
struct node* deletion(struct node* root,int val){
    if(root==NULL){
        return root;
    }if(root->data<val){
        root->right=deletion(root->right,val);
    }else if(root->data>val){
        root->left=deletion(root->left,val);
    }else{
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
            struct node* temp=inOrderSuccessor(root->right);
            root->data=temp->data;
            root->right=deletion(root->right,temp->data);
        }
    }return root;
}
int height(struct node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=height(root->left);
    int rheight=height(root->right);
    if(lheight>rheight){
        return lheight+1;
    }else{
        return rheight+1;
    }
}
void inOrder(struct node* root){
    if(root==NULL){
        return;
    }inOrder(root->left);
    printf("%d ",root->data );
    inOrder(root->right);
}void levelOrdertraversal(struct node* root){
    enqueue(root);
    enqueue(NULL);
    while(!isempty()){
        struct node* n=q.arr[front];
        dequeue();
        if(n!=NULL){
            printf("%d ",n->data);
        
        if(n->left){
            enqueue(n->left);
        }else if(n->right){
            enqueue(n->right);
        }
        }else if(!isempty()){
            enqueue(NULL);
        }
    }
}
int main(){
    struct node* root=NULL;
    root=insert(root,10);
    insert(root,11);
    insert(root,1);
    insert(root,2);
    insert(root,3);
    insert(root,4);
    insert(root,12);
    insert(root,5);
    inOrder(root);
    printf("\n");
    if(search(root,1)!=NULL){
        printf("The key is found!\n");
    }else{
        printf("NOT found!\n");
    }
    deletion(root,10);
    inOrder(root);

    printf("\n");
    int h=height(root);
    printf("%d \n",h);
    levelOrdertraversal(root);
    printf("\n");
    int min=minimum(root);
    int max=maximum(root);
    printf("%d %d\n",min,max);


}