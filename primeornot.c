//To find a number is prime or not
#include<stdio.h>
void main(){
  int number,i,count=1;
  printf("Enter a number:");
  scanf("%d",&number);
  for(i=2;i<number;i++){
      if(number%i==0){
          count++;
          break;
      }
  }
  if(count>1){
        printf("%d is not a prime number",number);
  }
  else{
      printf("%d is a prime number",number);
  }
}
