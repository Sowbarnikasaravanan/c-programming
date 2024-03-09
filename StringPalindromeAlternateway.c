// To check whether the string is palindrome or not 
#include<stdio.h>
#include<string.h>
void main(){
    char str[20];
    int flag,i,n;
    printf("Enter the string :");
    scanf("%s",str);
    n=strlen(str);
    flag=0;
    for(i=0;i<=n/2;i++){
        if(str[i]!=str[n-i-1]){
            printf("Not a palindrome");
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("palindrome");
    }
}

/* 

Sample output:
Enter the string :madam
palindrome

Enter the string :sowbarnika 
Not a palindrome

*/
         
