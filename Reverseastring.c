// To reverse a string
#include<stdio.h>
#include<string.h>
void main(){
    char a[30],temp;
    int i,l;
    printf("Enter the string:");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l/2;i++){
        temp=a[i];
        a[i]=a[l-i-1];
        a[l-i-1]=temp;
    }
    printf("%s",a);
}

/*
Sample output:
Enter the string:sowbarnika
akinrabwos
*/
