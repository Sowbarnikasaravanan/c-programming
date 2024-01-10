/* Relational operator
<    ->Less than
>    ->Greater than
<=   ->Less than or equal to
>=   ->Greater than or equal to
==   ->Equal to
!=   ->Not equal to
*/
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("%d \n",a<b);
    printf("%d \n",a>b);
    printf("%d \n",a<=b);
    printf("%d \n",a==b);
    printf("%d",a!=b);
}

/*
Enter two numbers:10
20
a<b 1 
a>b 0 
a<=b 1 
a>=b 0 
a==b 0 
a!=b 1
*/
