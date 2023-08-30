// To display fibonacci sequence
#include<stdio.h>
void main(){
  int n,fib;
  printf("Enter the number of terms:"); 
  scanf("%d",&n);
  int t1=0,t2=1,i;
  if(n==1)
    printf("Fibonacci series of first term is %d",n,t1);
  else if(n==2)
      printf("Fibonacci series of %d are %d,%d",n,t1,t2);
  else if(n>2){
      int next=t1+t2;
      printf("Fibonacci series of %d numbers are : %d %d ",n,t1,t2); 
      for(i=3;i<=n;i++){
          printf(" %d ",next);
          t1=t2;
          t2=next;
          next=t1+t2;
      }
  }
  else{
      printf("Sorry! You entered the negative value");
  }
}
