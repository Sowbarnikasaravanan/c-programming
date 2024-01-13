/* Logical Operator
&&  -> Logical and 
||  -> Logical or
!  ->Logical not
*/
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("%d \n",(a<b && a==b));
    printf("%d \n",(a<b || a==b));
    printf("%d",(a!=b));
}


/*
Enter the first number:5
Enter the second number:10
0 
1 
1
*/
