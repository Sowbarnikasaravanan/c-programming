//To reverse a number
#include<stdio.h>
void main(){
  int number,rev=0,temp,rem=0;
  printf("Enter a number:");
  scanf("%d",&number);
  temp=number;
  while(number!=0){
      rem=number%10;
      rev=rev*10+rem;
      number=number/10;
  }
  printf("The reverse of %d is %d",temp,rev);
}
