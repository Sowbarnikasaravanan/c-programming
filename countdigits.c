//To count a number of digits of an integer
#include<stdio.h>
void main(){
  int number,count=0,temp;
  printf("Enter a number:");
  scanf("%d",&number);
  temp=number;
  while(number!=0){
      number=number/10;
      count++;
  }
  printf("The number of digits in %d is %d",temp,count);
}
