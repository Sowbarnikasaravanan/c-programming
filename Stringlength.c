//To find the string length
#include<stdio.h>
void main(){
    char str[50];
    int i,len=0;
    printf("Enter the string :");
    for(i=0;i<='\0';i++){
       scanf("%s",&str);
    }
    for(i=0;str[i]!='\0';i++){
        len++;
    }
    printf("The length of the string is %d",len);
}
