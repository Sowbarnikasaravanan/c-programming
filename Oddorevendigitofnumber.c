// To print number of odd and even digits of a number separately
#include<stdio.h>
void main(){
    int n,rem=0,temp,odd=0,even=0;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        rem=temp/10;
        if(rem%2==0){
            even++;
        }
        else{
            odd++;
        }
        temp/=10;
    }
    printf("The number of odd numbers of %d is %d\n",n,odd);
    printf("The number of even numbers in %d is %d ",n,even);
}
/*
Sample output:
Enter the number:12346
The number of odd numbers of 12346 is 2
The number of even numbers in 12346 is 3 
*/
