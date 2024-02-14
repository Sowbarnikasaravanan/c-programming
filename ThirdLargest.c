// To find the third largest element in an array
#include<stdio.h>
void main(){
    int a[20],i,n,j,temp;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("Enter the elements of an array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
   }
    if(n>2){
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        printf("The third Largest element of an array is :%d",a[n-3]);
    }
    else{
        printf("You entered less than 3 numbers");
    }
}

/*
Sample Output:
--------------
Enter the size of an array:5
Enter the elements of an array:4
7
3
5
9
The third Largest element of an array is :5
*/
