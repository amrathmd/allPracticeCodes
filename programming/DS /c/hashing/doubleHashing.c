#include <stdio.h>
#include<stdlib.h>
#define TABLE_SIZE 10

int h[TABLE_SIZE]={0};

void insert(int key)
{
 int hkey=key%TABLE_SIZE;
 int hash2 = 7-(key %7);
 int i;
 for(i=0;i<TABLE_SIZE;i++)
 {
    int index=(hkey+i*hash2)%TABLE_SIZE;
    if(h[index] == 0)
    {
        h[index]=key;
        break;
    }
 }
 if(i == TABLE_SIZE)
     printf("\nelement cannot be inserted\n");
}
void search(int key)
{

 
int hkey=key%TABLE_SIZE;
int hash2 = 7-(key %7);
int i;
 for(i=0;i<TABLE_SIZE; i++)
 {
    int index=(hkey+i*hash2)%TABLE_SIZE;
    if(h[index]==key)
    {
      printf("value is found at index %d",index);
      break;
    }
  }
  if(i == TABLE_SIZE)
    printf("\n value is not found\n");
}
void display()
{

  int i;
  printf("\nelements in the hash table are \n");
  for(i=0;i< TABLE_SIZE; i++)
    printf("\nat index %d \t value =  %d",i,h[i]);

}
int main(){
    insert(89);
    insert(18);
    insert(49);
    insert(58);
    insert(69);
    display();
    printf("\n");

}