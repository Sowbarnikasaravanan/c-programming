//To find the sum of elements of odd and even position separately
#include<stdio.h>
void main(){
  int a[20],i,n,odd_sum=0,even_sum=0;
  printf("Enter the number of elements in an array:");
  scanf("%d",&n);
  printf("Enter the elements of an array:");
  for(i=0;i<n;i++){
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
      if(i%2==0){
            even_sum+=a[i];
      }
      else{
        odd_sum+=a[i];
      }
  }
  printf("The sum of elements in odd index is :%d \n",odd_sum);
  printf("The sum of elements in even index is :%d",even_sum);
}

/*
Sample Output:
Enter the number of elements in an array:5
Enter the elements of an array:10
20
30
40
50
The sum of elements in odd index is :60 
The sum of elements in even index is :90
*/
