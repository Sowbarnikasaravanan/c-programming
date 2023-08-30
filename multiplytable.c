//Multiplication table
#include<stdio.h>
void main(){
  int i,n,table;
  printf("Enter the table:");
  scanf("%d",&table);
  printf("Enter the limit:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
      printf("%d * %d =%d \n",i,table,i*table);
  }
}
