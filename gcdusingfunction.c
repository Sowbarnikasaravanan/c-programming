//To find the gcd using function 
#include<stdio.h>
int gcd(int,int);
void main(){
  int num1,num2;
  printf("Enter two numbers:");
  scanf("%d %d",&num1,&num2);
  printf("The gcd of  %d and %d is %d",num1,num2,gcd(num1,num2));
}
int gcd(int a,int b){
    int i,gcd;
    if(a==0 || b==0){
        return 0;
    }
    else if(a==1 || b==1){
        return 1;
    }
    else{
        for(i=2;(i<=a && i<=b);i++){
            if(a%i==0 && b%i==0){
                gcd=i;
            }
        }
        return gcd;
    }
}
