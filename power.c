//To find the power of a given number
#include<stdio.h>
void main(){
  int base,pow=1,exp;
  printf("Enter the base:");
  scanf("%d",&base);
  printf("Enter the exponent:");
  scanf("%d",&exp);
  while(exp!=0){
      pow=pow*base;
      exp--;
  }
  printf("The power is %d",pow);
}
