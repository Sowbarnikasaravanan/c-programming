//To find the factorial of a number using recursion
#include<stdio.h>
int factorial(int );
void main(){
  int n;
  printf("Enter the number for which the factorial to be found:");
  scanf("%d",&n);
  printf("The factorial of %d is:%d",n,factorial(n));
}
int factorial(int n){
    if(n==1){
      return 1;
    }
    else{
      return n*factorial(n-1);
    }
   
}
      
