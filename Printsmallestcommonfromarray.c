// To find the minimum common element of two arrays
#include<stdio.h>
void main(){
    int a[20],b[20],i,j,n,m,min=0;
    printf("Enter the number of elements in first array:");
    scanf("%d",&m);
    printf("Enter the number of elements in second array:");
    scanf("%d",&n);
    printf("Enter the elements of array 1:");
    for(i=0;i<m;i++){
         scanf("%d",&a[i]);
    }
    printf("Enter the elements of array 2:");
    for(j=0;j<n;j++){
        scanf("%d",&b[j]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i]==b[j]){
               if(min>=a[i]){
                   min=a[i];
               }
            }
        }
    }
    printf("Minimum common element between two arrays are:%d",min);
}
