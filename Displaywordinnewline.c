//To display words in new line 
#include<stdio.h>
#include<string.h>
void main(){
    char a[50];
    int i;
    printf("Enter the sentence:");
    gets(a);
    for(i=0;i<strlen(a);i++){
        if(a[i]!=' '){
            printf("%c",a[i]);
        }
        else{
           printf("\n");
        }
    }
}
        
    
