/*
To print the number pattern
33333
32223
32123
32223
33333
*/
#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                printf("%d",(n/2+1));
            }
            else if(i%2!=0 || j%2!=0){
                printf("%d",(n-1)/2);
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }

    return 0;
}
