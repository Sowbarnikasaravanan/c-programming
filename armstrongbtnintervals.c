// To display all the armstrong numbers between two intervals
#include<stdio.h>
void main(){
    int start,end,i,rev,rem,temp,t;
    printf("Enter the starting and ending point:");
    scanf("%d %d",&start,&end);
    if(start>end){
        t=start;
        start=end;
        end=t;
    }
    printf("The armstrong numbers between %d and %d are:",start,end);
    for(start=start+1;start<end;start++)
    {
        temp=start;
        rev=0;
        rem=0;
        while(start!=0){
            rem=start%10;
            rev=rev+(rem*rem*rem);
            start=start/10;
        }
        if(temp==rev){
            printf("%d ",rev);
        }
        start=temp;
        
    }
}
