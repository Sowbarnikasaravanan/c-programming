//To swap two numbers without a third variable
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Before swapping,a=%d and b=%d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping, a=%d and b=%d",a,b);
}
