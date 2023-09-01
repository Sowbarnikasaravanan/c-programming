// To find the factors of a number
#include<stdio.h>
void main(){
    int num,i;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("The factors of %d :",num);
    for(i=1;i<=num;i++){
        if(num%i==0){
            printf("%d ",i);
        }
    }
}
