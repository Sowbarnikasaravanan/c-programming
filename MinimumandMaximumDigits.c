// To find the minimum and maximum digits of a number
#include <stdio.h>
int main() {
    // Write C code here
    int n,t,min=10,max=0,rem=0;
    scanf("%d",&n);
    t=n;
    while(n>0){
        rem=n%10;
        if(rem>max){
            max=rem;
        }
        if(rem<min){
            min=rem;
        }
        n=n/10;
    }
    printf("The minimum and maximum digits of %d is %d and %d ",t,min,max);

    return 0;
}
/* 
Sample output:
8638219
The minimum and maximum digits of 8638219 is 1 and 9 
*/
