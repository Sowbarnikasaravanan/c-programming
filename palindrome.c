// To find the given number is palindrome or not
#include<stdio.h>
void main(){
  int num,rem=0,rev=0,temp;
  printf("Enter the number:");
  scanf("%d",&num);
  temp=num;
  while(num!=0){
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
  }
  if(temp==rev){
      printf("Palindrome");
  }
    else{
      printf("Not Palindrome");
  }
}
