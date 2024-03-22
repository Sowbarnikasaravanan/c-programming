// To print all the pairs of an array
#include<stdio.h>
void main(){
    int a[20],i,j,n;
    printf("Enter the no. of elements in an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            printf("(%d,%d)",a[i],a[j]);
        }
    }
}

/*
Enter the no. of elements in an array:5
1
2
3
4
5
(1,2)(1,3)(1,4)(1,5)(2,3)(2,4)(2,5)(3,4)(3,5)(4,5)
*/
