// To display the stars in the inverted triangle 
#include<stdio.h>
void main(){
    int i,j,num;
    printf("Enter the number of rows :");
    scanf("%d",&num);
    for(i=num;i>0;i--){
         for(j=i;j>=1;j--){
             printf("* ");
         }
         printf("\n");
    }
}
