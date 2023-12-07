//To find the gcd using recursion
#include<stdio.h>
int gcd(int a,int b){
    int t;
    if(a<b){
        t=a;
        a=b;
        b=t;
    }
    
    if(b!=0){
        return gcd(b,a%b);
    }
    else{
        return a;
    }
}
void main(){
  int num1,num2;
  printf("Enter two numbers:");
  scanf("%d %d",&num1,&num2);
  printf("The gcd of  %d and %d is %d",num1,num2,gcd(num1,num2));
}
