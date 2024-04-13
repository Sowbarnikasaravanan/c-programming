//To check whether the number is strong number or not
#include<stdio.h>
void main(){
    int n,i,fact=1,rem=0,temp,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        rem=temp%10;
        fact=1;
        for(i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum+=fact;
        temp=temp/10;
    }
    if(n==sum){
        printf("%d is a strong number",n);
    }
    else{
        printf("%d is not a strong number",n);
    }
}

/*
Sample Output:
Enter the number:145
145 is a strong number

Enter the number:541
541 is not a strong number

*/
