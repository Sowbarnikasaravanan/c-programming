/* 
To display the star pattern 
* * * * *
 * * * *
  * * *
   * *
    *
   * *
  * * *
 * * * *
* * * * *
*/
#include<stdio.h>
void main(){
    int n,i,j,k;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
           printf("* ");
        }
        printf("\n");
    }
    for(i=2;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
}
