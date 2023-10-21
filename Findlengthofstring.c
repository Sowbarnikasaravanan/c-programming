//To find the length of a string 
#include<stdio.h>
void main(){
    char a[]="To find the length of a string";
    int i=0;
    while(a[i]!='\0'){
         i=i+1;
    }
    printf("The length of the string is :%d",i+1);
}
