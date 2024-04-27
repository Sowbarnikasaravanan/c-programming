// To multiply two matrix
#include <stdio.h>
int main() {
    int a[30][30],b[30][30],mult[30][30],i,j,k,n,m,r,c;
    printf("Enter the size of an array 1: ");
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("First matrix: \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the size of array 2:");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Second matrix: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    if(m==r){
        for(i=0;i<n;i++){
            for(j=0;j<c;j++){
                mult[i][j]=0;
            }
        }
        printf("After multiplication:\n");
        for(i=0;i<n;i++){
            for(j=0;j<c;j++){
                for(k=0;k<c;k++){
                    mult[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<c;j++){
                printf("%d ",mult[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}

/*
Sample output:
Enter the size of an array 1: 1
2
4
6
First matrix: 
4 6 
Enter the size of array 2:2
3
6
4
3
2
7
6
Second matrix: 
6 4 3 
2 7 6 
After multiplication:
36 58 48 
*/
