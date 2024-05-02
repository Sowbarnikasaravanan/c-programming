/*To check whether the number is neon or not 
The sum of the digits of the square of a number 
9 => 9*9=81 => 8+1=9  */
#include<stdio.h>
void main(){
    int num,sq,sum,rem=0;
    printf("Enter the number:");
    scanf("%d",&num);
    sq=num*num;
    while(sq>0){
       rem=sq%10;
       sum+=rem;
       sq=sq/10;
   }
   if(num==sum){
       printf("%d is a neon number",num);
   }
   else{
       printf("%d is not a neon number",num);
   }
}
