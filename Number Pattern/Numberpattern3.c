/* To display the sequence 
0 1 0 1 0 1
0 1 0 1 0 1
0 1 0 1 0 1
0 1 0 1 0 1
0 1 0 1 0 1
0 1 0 1 0 1
*/
#include<stdio.h>
void main(){
    int n,i,j;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j%2==0){
               printf("0 ");
            }
            else{
                printf("1 ");
            }
        }
        printf("\n");
    }
}
    
