/*To  display the numbers in the pattern
   1
  1 2
 1 2 3
1 2 3 4
*/
#include<stdio.h>
void main(){
    int n,i,j,k;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            printf("%d",k+1);
        }
        printf("\n");
    }
}
