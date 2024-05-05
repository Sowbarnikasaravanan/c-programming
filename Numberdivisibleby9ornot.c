// To check whether a number is divisible by 9 or not
#include<stdio.h>
void main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%9==0){
        printf("%d is divisible by 9",n);
    }
    else{
        printf("%d is not divisible by 9",n);
    }
}
/* 
Sample Output:
Enter the number:81
81 is divisible by 9

Enter the number:67
67 is not divisible by 9
*/
