/* To display the numbers in the pattern
1 1 1 1 1 
1 0 0 0 1
1 0 0 0 1
1 0 0 0 1
1 1 1 1 1 */
#include<stdio.h>
void main(){
    int n,i,j;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           if(i==0 || i==n-1 || j==0 || j==n-1){
                printf("1 ");
           }
           else{
                printf("0 ");
           }
       }
        printf("\n");
    }
}
    
