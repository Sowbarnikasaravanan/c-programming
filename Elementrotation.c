// To rotate the array element on clockwise direction based on the user input
#include<stdio.h>
void main(){
   int  a[10],i,j,n,t,k,temp;
   printf("enter the size of array");
   scanf("%d",&n);
   printf("enter the elements  to an array :");
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   printf("enter the no.of  rotation:");
   scanf("%d",&t);
   for(i=0;i<t;i++){
       temp=a[n-1];
       for(j=n-1;j>=0;j--){
           a[j+1]=a[j];
       }
       a[0]=temp;
    }
     printf("The elements after the %d rotation",t);
     for(k=0;k<n;k++){
        printf("%d ",a[k]);
     }
}
