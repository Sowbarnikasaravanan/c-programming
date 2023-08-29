// To find the character is alphabet or not
#include<stdio.h>
void main(){
  char ch;
  printf("Enter any character:");
  scanf("%c",&ch);
  if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
    printf("%c is an alphabet",ch);
  }
  else{
    printf("%c is not an alphabet",ch);
  }
}
