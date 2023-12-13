// To display the star pattern 
#include<stdio.h>
void main(){
    int n,i,j,k;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
       for(j=0;j<2*(n-i)-1;j++){
           printf(" ");
       }
       for(k=0;k<=i;k++){
           printf("* ");
       }
        printf("\n");
    }
}


