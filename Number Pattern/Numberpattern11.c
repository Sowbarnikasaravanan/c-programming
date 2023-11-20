/*To display numbers in the half-diamond pattern
1
12
123
1234
12345
1234
123
12
1
*/
#include<stdio.h>
void main(){
    int n,i,j,k;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
             printf("%d",j);
        }
        printf("\n");
    }
    for(i=n-1;i>0;i--){
        for(j=1;j<=i;j++){
             printf("%d",j);
        }
        printf("\n");
    }
}
