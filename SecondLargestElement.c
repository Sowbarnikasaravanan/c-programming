//To find the second largest element in an array
#include<stdio.h>
void main(){
    int a[20],i,n,j,temp,second_max;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("Enter the elements of an array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        
    }
    second_max=a[n-2];
    printf("%d is the second largest element of an array",second_max);
}

/*
Sample Output:
Enter the size of an array:5
Enter the elements of an array:1
9
2
8
3
8 is the second largest element of an array
*/
