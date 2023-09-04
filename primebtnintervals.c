// To display all the prime numbers between two intervals
#include<stdio.h>
void main(){
    int s,e,i,j,t,c;
    printf("Enter the starting and ending intervals ");
    scanf("%d %d",&s,&e);
    if(s>e){
        t=s;
        s=e;
        e=t;
    }
    for(j=s;j<=e;j++){
        c=1;
        for(i=2;i<s;i++){
          if(s%i==0){
              c++;
          }
        }
        if(c==1){
          printf("%d ",s);
        }
      s++;
    }
}
