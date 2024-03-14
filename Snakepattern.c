To print the elements of a matrix in a snake pattern
#include <stdio.h>
void main() {
    int a[10][10],r,c,i,j;
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&r,&c);
    printf("Enter the elements of a matrix:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The elements in a matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The elements in the snake pattern is :\n");
    for(i=0;i<r;i++){
        if(i%2==0){
            for(j=0;j<c;j++){
                printf("%d ",a[i][j]);
            }
        }
        else{
            for(j=c-1;j>=0;j--){
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
}

/* 
Sample output:
Enter the number of rows and columns:3
3
Enter the elements of a matrix:1
2
3
4
5
6
7
8
9
The elements in a matrix:
1 2 3 
4 5 6 
7 8 9 
The elements in the snake pattern is :
1 2 3 
6 5 4 
7 8 9 
*/
