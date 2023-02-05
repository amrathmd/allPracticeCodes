#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);
    char subStr[100];
    printf("enter the substring:");
    fgets(subStr,sizeof(subStr),stdin);
    int repeat=0;
    int size=strlen(subStr);
    for(int i=0;i<strlen(str);i++){
        for(int j=i;j<i+strlen(subStr);j++){
            if(str[j]==subStr[j-i]){
                repeat++;
            }
        }
            
        
    }printf("%d",repeat/size);
}