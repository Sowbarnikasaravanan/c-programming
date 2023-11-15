/*To display the numbers in the pattern
11011
11011
00000
11011
11011
*/
#include<stdio.h>
void main(){
    int row,col,i,j;
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(i==row/2 || j==col/2){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
}
