//To count the number of alphabets present in the string 
#include<stdio.h>
void main(){
    char str[30];
    int n,i,count;
    printf("Enter the length of the string:");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(i=0;i<n;i++){
        scanf("%c",&str[i]);
    }
    for(i=0;i<n;i++){
        if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z')){
            count++;
        }
    }
    printf("The number of characters :%d",count);
}
