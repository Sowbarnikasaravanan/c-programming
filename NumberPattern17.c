/*
To print the number pattern
12345
2   4
3   3
4   2
54321
*/
#include <stdio.h>
int main() {
    int n,i,j,t;
    printf("Enter the number:");
    scanf("%d",&n);
    t=n;
    for(i=n;i>=1;i--){
        for(j=1;j<=n;j++){
            if(i==n){
                printf("%d",j);
            }
            else if(i==1){
                printf("%d",t);
                t--;
            }
            else{
                if(j==1){
                    printf("%d",n-i+1);
                }
                else if(j==n){
                    printf("%d",i);
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
