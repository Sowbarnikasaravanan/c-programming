// To find the average of elements in an array 
#include<stdio.h>
void main(){
    int a[20],i,sum=0,n;
    float average=0;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    average=sum/n;
    printf("The average of %d numbers in an array is :"%f,n,average);
}
