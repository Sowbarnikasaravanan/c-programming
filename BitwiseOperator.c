/*
 Bitwise operator
& -> Bitwise and 
|  -> Bitwise or
~  ->Bitwise not
^  ->Bitwise xor
<< ->Left shift
>> ->Right shift 
*/
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
   printf("Enter the second number:");
   scanf("%d",&b);
   printf("%d \n",(a&b));
    printf("%d \n",(a|b));
    printf("%d \n",(a^b));
    printf("%d \n",(~a));
    printf("%d \n",(a<<2));
    printf("%d \n",(b>>2));
}

/*
Enter the first number:7
Enter the second number:4
4 
7 
3 
-8 
28 
1 
*/
