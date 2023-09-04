// To find the LCM of two numbers 
#include<stdio.h>
void main(){
    int a,b,gcd=0,lcm=0,i;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    for(i=2;(i<=a && i<=b);i++){
      if((a%i==0)&&(b%i==0)){
          gcd=i;
      }
    }
    lcm=(a*b)/gcd;
    printf("The LCM of %d and %d is :%d",a,b,lcm);
}
