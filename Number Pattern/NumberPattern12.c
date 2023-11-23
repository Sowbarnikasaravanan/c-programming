/* To display the numbers in the sequence
1
12
123
1234
12345
123456
*/
#include<stdio.h>
void main(){
  int n,i,j,k;
  printf("Enter the number:");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<=i;j++){
        printf("%d",j+1);
    }
    printf("\n");
  }
}
