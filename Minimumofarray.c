/ To find the minimum element in an array
#include<stdio.h>
void main(){
  int a[20],i,n;
  printf("Enter the size of an array:");
  scanf("%d",&n);
  printf("Enter the elements :");
  for(i=0;i<n;i++){
     scanf("%d",a[i]);
  }
  for(i=0;i<n;i++){
     if(a[0]>a[i]){
       a[0]=a[i];
     }  
  }  
  printf("The minimum element of an array is :%d",a[0]);
}
  
