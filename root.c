//To find root of  the quadratic equation
#include<stdio.h>
#include<math.h>
void main(){
  int a,b,c,d,r,r1,r2;
  printf("Enter the cofficients a,b,c:");
  scanf("%d %d %d ",&a,&b,&c);
  d=(b*b)-(4*a*c);
  if(d>0){
     r1=((-b)+sqrt(d))/(2*a);
      r2=((-b)-sqrt(d))/(2*a);
      printf("The roots are  %d and %d",r1,r2);
  }
  else if(d==0){
    r=((-b))/(2*a);
    printf("The root is %d",r);
  }
  else{
     r1=(-b)/(2*a);
     r2=sqrt(-d)/(2*a);
     printf("Real root=%d \n Imaginary root=%d",r1,r2);
  }
  }
