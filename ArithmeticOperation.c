/* Example for arithmetic operations
+  ->Addition
-  ->Subtraction
*  ->Multiplication
/  ->Divison(Quotient)
%  ->Remainder
*/
#include<stdio.h>
void main(){
    int num1,num2;
    printf("Enter the two nuumbers:");
    scanf("%d %d",&num1,&num2);
    printf("Addition of %d and %d results in %d \n",num1,num2,num1+num2);
    printf("Subtraction of %d and %d is %d \n",num1,num2,num1-num2);
    printf("Multiplication of %d and %d is %d \n",num1,num2,num1*num2);
    printf("The quotient when %d is divided by %d is %d \n",num1,num2,num1/num2);
    printf("The remainder when %d is divided by %d is %d \n",num1,num2,num1%num2);
}
