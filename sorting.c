// To sort the elements of an array
#include<stdio.h>
int main(){
  int n,i,j,t,a[20];
  printf("Enter the size of an array:");
  scanf("%d",&n);
  printf("Enter %d elements :",n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("The sorted elements of an array:");
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(a[i]>a[j]){
          t=a[j];
          a[j]=a[i];
          a[i]=t;
      }
    }
    printf("%d \n",a[i]);
  }
  return 0;
}
