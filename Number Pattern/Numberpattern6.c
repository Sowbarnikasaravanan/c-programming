/* To display the numbers in the sequence
10101
01010
10101
01010
10101
*/
#include<stdio.h>
void main(){
    int row,col,i,j;
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if((i%2==0 && j%2==0)){
                printf("1");
            }
            else if((i%2!=0 && j%2!=0)){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}
