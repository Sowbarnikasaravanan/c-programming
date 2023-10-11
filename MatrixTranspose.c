//To perform transpose of a matrix 
#include<stdio.h>
void main(){
    int row,col,i,j;
    int a[50][50];
    printf("Enter the row and column size:");
    scanf("%d %d",&row,&col);
    printf("Enter the elements of the matrix:");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d ",a[i][j]);
        }
    }
    printf("The elements of the matrix :");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose matrix is :");
    for(i=0;i<col;i++){
        for(j=0;j<row;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}


