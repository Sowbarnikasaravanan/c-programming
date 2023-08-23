//Swapping of two numbers
#include<stdio.h>
void main(){
  int a,b,temp;
  printf("Enter two numbers :");
  scanf("%d %d",&a,&b);
  printf("Before swapping:%d %d \n",a,b);
  temp=a;
  a=b;
  b=temp;
  printf("After swapping :%d %d",a,b);
}
