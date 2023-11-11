/* To display the number pattern 
1 1 1 1 1 
1 1 1 1 1
1 1 1 1 1 
1 1 1 1 1 
1 1 1 1 1 
*/
#include<stdio.h>
void main(){
    int n,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("1 ");
        }
        printf("\n");
    }
}
