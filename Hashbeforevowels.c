// To place '#' before vowels in a string
#include<stdio.h>
#include<string.h>
void main(){
    char a[20],b[20],c;
    int i,j=0;
    printf("Enter the string:");
    scanf("%s",a);
    for(i=0;i<strlen(a);i++){
            c=a[i];
            if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' ||c=='e' || c=='i' || c=='o' || c=='u'){
                b[j++]='#';
            }
            b[j++]=c;
    }
    printf("%s",b);
}

/* Sample output:
Enter the string:sowbarnika 
s#owb#arn#ik#a
*/
