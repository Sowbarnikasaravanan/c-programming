// To check the string is palindrome or not 
#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
    char a[20],b[20],i,j=0;
    int flag=1,n;
    printf("Enter the string:");
    scanf("%s",a);
    n=strlen(a);
    for(i=n-1;i>=0;i--){
        b[j]=a[i];
        j++;
    }
    for(i=0;i<n-1;i++){
        if(a[i]!=b[i]){
            flag=0;
            break;
        }
    }
    if(flag==0){
        printf("Not a palindrome");
    }
    else{
        printf("Palindrome");
    }
    
}
