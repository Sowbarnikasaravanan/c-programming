//To find the prime numbers between two intervals using function
#include<stdio.h>
void prime(int x,int y);
void main(){
  int low,high,t;
  printf("Enter the intervals (low and high):");
  scanf("%d %d",&low,&high);
  if(low>high){
    t=low;
    low=high;
    high=t;
  }
  prime(low,high);
}
void prime(int x,int y){
  int i,j,count;
  for(i=x;i<y;i++){
      count=1;
      for(j=0;j<x;j++){
          if(x%j==0){
              count++;
          }
      }
      if(count==1){
          printf("%d",x);
      }
      x++;
  }
}
