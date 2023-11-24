/* To display the numbers in the following pattern
     1
    22
   333
  4444
 55555
666666
*/
#include<stdio.h>
void main(){
  int n,i,j,k;
  printf("Enter the number:");
  scanf("%d",&n);
  for(i=0;i<n;i++){
      
      for(k=0;k<n-i-1;k++){
          printf(" ");
      }
      for(j=0;j<=i;j++){
           printf("%d",i+1); 
      }
      printf("\n");
  }
}
