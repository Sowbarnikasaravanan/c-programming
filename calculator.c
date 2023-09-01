//Simple calculator using switch case
#include<stdio.h>
void main(){
  int n,a,b,y,sum=0,sub=0,mul=0,div=0,rem=0;
  do{
    printf("Enter the choice :\n 1.Addition \n2.Subtraction \n3.Multiplication \n4.Division ");
    scanf("%d",&n);
    switch(n){
      case 1:printf("Enter two numbers:");
             scanf("%d %d",&a,&b);
             sum=a+b;
             printf("The sum of %d and %d is %d \n",a,b,sum);
             break;
      case 2:printf("Enter two numbers:");
             scanf("%d %d",&a,&b);
             sub=a-b;
             printf("The difference of %d and %d is %d \n",a,b,sub);
             break;
      case 3:printf("Enter two numbers:");
             scanf("%d %d",&a,&b);
             mul=a*b;
             printf("The mutiplication of %d and %d is %d\n",a,b,mul);
             break;
      case 4:printf("Enter two numbers:");
             scanf("%d %d",&a,&b);
             div=a/b;
             rem=a%b;
             printf("The quotient and remainder when %d is divided by %d are %d and %d\n",a,b,div,rem);
             break;
      default: printf("Sorry you entered an invalid number\n");
    }
    printf("Do You want to continue, if yes, press 1");
    scanf("%d",&y);
  }while(y==1);
}
      
