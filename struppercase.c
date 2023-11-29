// To convert the string elements to be capitalized
#include<stdio.h>
#include<string.h>
void main(){
    char str[30],i;
    printf("Enter the string:");
    scanf("%s",str);
    for(i=0;i<strlen(str);i++){
        if(str[i]>'a' || str[i]<'z'){
              printf("%c",str[i]-32);
        }
        else{
            printf("%c",str[i]);
        }
    }
}
  
