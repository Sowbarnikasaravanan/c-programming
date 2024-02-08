// To reverse of the elements of an array 
#include<stdio.h>
void main(){
    int a[30],i,n,rev[30],j=0;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("Enter the elements of an array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--){
        rev[j++]=a[i];
    }
    printf("After reversing, the elements:");
    for(i=0;i<n;i++){
        printf("%d ",rev[i]);
    }
}

/*
Sample Output:
Enter the size of an array:4
Enter the elements of an array:1
2
3
4
After reversing, the elements:4 3 2 1 
*/
