/* To display the numbers in the pattern
11111
22222
33333
44444
55555
*/
#include<stdio.h>
void main(){
    int rows,cols,i,j;
    printf("Enter the number of rows and columns :");
    scanf("%d %d",&rows,&cols);
    for(i=1;i<=rows;i++){
       for(j=1;j<=cols;j++){
            printf("%d",i);
       }
       printf("\n");
    }
}

    
