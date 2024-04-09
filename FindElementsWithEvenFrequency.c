// To find the elements in an array that have even frequency
#include <stdio.h>

int main() {
    int a[20],i,j,n,b[20],count=0,k=0;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The elements with even frequency:");
    for(i=0;i<n-1;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j] && a[i]!=b[j]){
                count++;
            }
        }
        if(count==1){
            b[k++]=a[i];
        }
        else if(count%2==0){
            printf("%d ",a[i]);
        }
    }
}
/* 
Sample Output:
Enter the size of an array:8
Enter the elements:
1
2
3
4
5
6
2
5
The elements with even frequency:2 5 
*/
