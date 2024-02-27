// To merge two arrays and sort the merged array
#include<stdio.h>
void main(){
    int a[20],b[20],i,n1,n2,n,c[40],j,temp;
    printf("Enter the size of first array:");
    scanf("%d",&n1);
    printf("Enter the elements of first array:");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    
    printf("Enter the size of second array:");
    scanf("%d",&n2);
    printf("Enter the elements of second array:");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    n=n1+n2;
    for(i=0;i<n1;i++){
        c[i]=a[i];
    }
    j=0;
    for(i=n1;i<n1+n2;i++){
        
        c[i]=b[j++];
    }
    printf("After merging two arrays:");
    for(i=0;i<n;i++){
        printf("%d ",c[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(c[i]>c[j]){
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    printf("\nAfter sorting:");
    for(i=0;i<n;i++){
        printf("%d ",c[i]);
    }
}

/*
Sample Output:
Enter the size of first array:3
Enter the elements of first array:1
9
3
Enter the size of second array:4
Enter the elements of second array:8
4
7
5
After merging two arrays:1 9 3 8 4 7 5 
After sorting:1 3 4 5 7 8 9
*/
