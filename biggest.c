//biggest of three number
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the  three numbers:");
    scanf("%d %d %d",&a,&b,&c);
if(a>b){
    printf("a is biggest");
}
else if(a>c){
    printf("a is biggest");
}
else if(b>c){
    printf("b is biggest");
}
else{
    printf("c is biggest");
}
return 0;
}
