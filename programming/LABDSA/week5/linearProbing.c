#include<stdio.h>
#define tableSize 10
int hashTable[tableSize]={0};
void insert(int key){
    int hkey=key%tableSize;
    int i;
    for(i=0;i<tableSize;i++){
        int index=(hkey+i)%tableSize;
        if(hashTable[index]==0){
            hashTable[index]=key;
            return;
        }
    }if(i==tableSize){
        printf("The hashTable is full!");
    }
    
}
void delete(int key){
    int hkey=key%tableSize;
    int i;
    for(i=0;i<tableSize;i++){
        int index=(hkey+i)%tableSize;
        if(hashTable[index]==key){
            hashTable[index]=0;
            return;
        }
    }if(i==tableSize){
        printf("key not found!");
    }
}
void display(){
    for(int i=0;i<tableSize;i++){
        printf("Hash[%d]::",i);
        printf("%d\n",hashTable[i]);
    }
}
int main(){
    for(int i=1;i<5;i++){
        insert(i);
    }
    display();
}
