//To find the sum of n natural nummbers using recursion
#include<stdio.h>
int sum(int n){
    if(n==0){
      return 0;
    }
    else{
      return n+sum(n-1);
    }
   
}
void main(){
  int n,s;
  printf("Enter the n of natural number:");
  scanf("%d",&n);
  s=sum(n);
  printf("The sum of first %d natural number is:%d",n,s);
}
int sum(int n){
    if(n==0){
      return 0;
    }
    else{
      return n+sum(n-1);
    }  
}
      
