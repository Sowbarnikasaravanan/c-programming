// To reverse a string
#include<stdio.h>
#include<string.h>
void main(){
  char a[30],rev[30],i,l,k=0;
  printf("Enter the string:");
  scanf("%s",a);
  l=strlen(a);
  for(i=l-1;i>=0;i--){
      rev[k++]=a[i];
  }
  printf("%s",rev);
}
