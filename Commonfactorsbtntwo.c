//To find the common factors between two numbers
#include<stdio.h>
void main(){
    int a,b,i,n;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    n=a<=b?a:b;
    for(i=1;i<=n;i++){
        if(a%i==0 && a%i==0){
            printf("%d ",i);
        }
    }
}
/* Sample output:
Enter two numbers:4
8
1 2 4 
*/
