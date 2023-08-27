// To find the given letter is vowel or consonant
#include<stdio.h>
void main(){
  char l;
  printf("Enter any character:");
  scanf("%c",&l);
  if(l=='a' || l=='e'||l=='i' ||l=='o' ||l=='u'||l=='A' ||l=='E' ||l=='I' ||l=='O'||l=='U')
  {
    printf("%c is a vowel",l);
  }
  else{
    printf("%c is a consonant",l);
  }
}  
