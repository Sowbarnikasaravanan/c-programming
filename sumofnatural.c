//Sum of first n natural numbers
#include<stdio.h>
void main(){
  int n,i,sum;
  printf("Enter the number till which we need to sum:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    sum=sum+i;
  }
  printf("The  sum of first %d natural number is %d",n,sum);
}
