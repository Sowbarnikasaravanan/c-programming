// To find the maximum difference between an array
#include<stdio.h>
void main(){
    int a[20],i,j,n,max=0;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]-a[j]>max){
                max=a[i]-a[j];
            }
            else if(a[j]-a[i]>max){
                max=a[j]-a[i];
            }
        }
    }
    printf("%d is the maximum difference between an array",max);
}

/* Sample Output:
Enter the size of an array:5
Enter the elements:9
7
6
4
3
6 is the maximum difference between an array
*/
    
