//To check whether the given number is positive or negative
#include<stdio.h>
void main(){
  float number;
  printf("Enter the number:");
  scanf("%f",&number);
  if(number<0){
    printf("Your entered the negative number");
  }
  else  if(number>0){
    printf("You entered the positive number");
  }
  else{
    printf("You entered 0");
  }
}
