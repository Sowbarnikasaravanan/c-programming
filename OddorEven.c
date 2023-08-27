//To check whether the given number is odd or even.
#include<stdio.h>
void main(){
  int number;
  printf("Enter the number to check:");
  scanf("%d",&number);
  if(number%2 == 0){
    printf("%d is an even number",number);
  }
  else{
    printf("5d is an odd number",number);
  }
}
