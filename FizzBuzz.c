/*
FizzBuzz sequence
To print numbers between two numbers
if the number in the sequence divisible by 3, then print Fizz
if the number in the sequence divisible by 5, then print Buzz
if the number divible by both 3 and 5, then print FizzBuzz
else print the number
*/
#include<stdio.h>
void main(){
    int start,end,i,temp;
    printf("Enter the starting number:");
    scanf("%d",&start);
    printf("Enter the ending number:");
    scanf("%d",&end);
    if(end<start){
        temp=start;
        start=end;
        end=start;
    }
    for(i=start;i<=end;i++){
        if(i%3==0 && i%5==0){
            printf("FizzBuzz \n");
        }
        else if(i%3==0){
            printf("Fizz \n");
        }
        else if(i%5==0){
            print("Buzz \n");
        }
        else{
            print(%d \n",i);
        }
    }
}



