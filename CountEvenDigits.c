//To count the number of even digits in a number
#include <stdio.h>

void main() {
    int n,t,rem=0,c=0;
    printf("Enter the number:");
    scanf("%d",&n);
    t=n;
    while(t>0){
        rem=t%10;
        if(rem%2==0){
            c++;
        }
        t=t/10;
    }
    printf("The number of even numbers in %d is %d",n,c);
}

/*
Enter the number:654643
The number of even numbers in 654643 is 4
*/
