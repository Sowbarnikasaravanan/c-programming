/* To display the star pattern 
*****
*****
*****
*****
*****
*/
#include<stdio.h>
void main(){
    int n,i,j;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
}

/* 
Sample Output:
Enter the number:5
*****
*****
*****
*****
*****
*/
