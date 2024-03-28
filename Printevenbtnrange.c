// To print all even numbers between two intervals 
#include<stdio.h>
void main(){
    int s,e,i,t;
    printf("Enter the starting number:");
    scanf("%d",&s);
    printf("Enter the ending number:");
    scanf("%d",&e);
    if(s>e){
        t=s;
        s=e;
        e=t;
    }
    for(i=s;i<=e;i++){
        if(i%2==0){
            printf("%d",i);
        }
    }
}
