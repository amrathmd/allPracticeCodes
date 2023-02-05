#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;

};struct node*head;
    struct node* createnode(){
        struct node *newnode,*temp;
        printf("enter the no of nodes :");
        int n;
        scanf("%d",&n);
        int data;
    for(int i=0; i<n;i++){
        if(head==NULL){
            newnode=malloc(sizeof(struct node));
            printf("entr the data in node %d :",i);
            scanf("%d",&newnode->data);
            newnode->next=NULL;
            head=newnode;
            temp=newnode;


        }
        else if(i==n-1){
            newnode=malloc(sizeof(struct node));
            printf("entr the data in node %d :",i);
            scanf("%d",&newnode->data);
            newnode->next=head;
            temp->next=newnode;
            temp=newnode;

        }
        else{
            newnode=malloc(sizeof(struct node));
            printf("entr the data in node %d :",i);
            scanf("%d",&newnode->data);
            newnode->next=NULL;
            temp->next=newnode;
            temp=newnode;


    }
    }
    return head;
    }
    struct node* addatbeg(){
        struct node *begnode;
        begnode=malloc(sizeof(struct node));
        printf("entr the data in node %d :",1);
        scanf("%d",&begnode->data);
        begnode->next=head;
        head=begnode;
        return head;

    }
    struct node* addatend(){
        struct node *lastnode,*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        lastnode=malloc(sizeof(struct node));
        printf("entr the data in node last node :");
        scanf("%d",&lastnode->data);
        lastnode->next=NULL;
        temp->next=lastnode;

        return head;


    }
    struct node* addatpos(){
        printf("enter the position to add the node :");
        int pos;
        scanf("%d",&pos);
        struct node *temp=head,*posnode,*deleat=temp;
        int i=0;
        if(i==pos){
            posnode=malloc(sizeof(struct node));
            printf("entr the data in  position node :");
            scanf("%d",&posnode->data);
            posnode->next=head;
            head=posnode;
        }
        else{
        while(i<pos){
            i++;
            temp=temp->next;
            deleat=deleat->next;

        }
            deleat=deleat->next;
            posnode=malloc(sizeof(struct node));
            printf("entr the data in  position node :");
            scanf("%d",&posnode->data);
            temp->next=posnode;
            posnode->next=deleat;

        }
        return head;


    }
    struct node* deletatpos(){
         printf("enter the position to deleat the node :");
        int pos;
        scanf("%d",&pos);
        struct node *temp=head,*posnode,*deleat=temp;
        int i=0;
        if(pos==0){
            temp=head;
            temp=temp->next;
            head=temp;

        }
        else{
        while(i<pos-1){
            i++;
            temp=temp->next;
            deleat=deleat->next;

        }
            deleat=deleat->next->next;
            temp->next=deleat;

        }
        return head;



    }
    void printingdata(){
        struct node *temp;
        temp=head;
        do{
            printf("%d->",temp->data);
            temp=temp->next;
       }
        while(temp!=head);
        }
int main(){
     struct node *head=NULL;
    while(1){
        printf("1 FOR CRATING LINKED LIST\n2FOR ADD AT BEGINING\n3 FOR ADD AT END\n4 FOR AT POSITON\n5 FOR DELEAT AT POSITION\n6FOR PRINTING DATA\n7 FOR EXIT \nCHOOSE OPTION FROM ABOVE");
        int a;
        scanf("%d",&a);
        switch(a){
            case 1:
            createnode();
              break;

            case 2:
                addatbeg();
                  break;

            case 3:
                addatend();
                  break;

            case 4:
                addatpos();
                  break;

            case 5:
                deletatpos();
                  break;


            case 6:
                printingdata();
                break;

            case 7:
                exit(0);


            default:
                printf("invalid choice");




    }
}
}
