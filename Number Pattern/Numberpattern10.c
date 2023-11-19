/*To display the pattern in the form
55555
4444
333
22
1
*/
// Online C compiler to run C program online
#include<stdio.h>
void main(){
  int n,i,j;
  printf("Enter the number:");
  scanf("%d",&n);
  for(i=n;i>=1;i--){
      for(j=1;j<=i;j++){
          printf("%d",i);
      }
    printf("\n");
  }
}
