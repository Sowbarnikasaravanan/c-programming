//To find the factorial of a number
 #include<stdio.h>
void main(){
  int number,fact=1,i;
  printf("Enter the number to find factorial:");
  scanf("%d",&number);
  if(number==0 || number==1){
      fact=1;
  }
  for(i=1;i<=number;i++){
      fact=fact*i;
  }
  printf("The factorial of %d is %d",number,fact);
}
