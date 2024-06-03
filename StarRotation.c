/* To print the star pattern
STAR
TARS
ARST
TARS
*/
#include<stdio.h>
#include<string.h>
void main(){
    char s[]="STAR";
    int n=strlen(s),i,j,t;
    printf("%s\n",s);
    for(i=0;i<n-1;i++){
        t=s[0];
        for(j=0;j<n-1;j++){
            s[j]=s[j+1];
        }
        s[n-1]=t;
        printf("%s \n",s);
    }
}

/*
Sample output:
STAR
TARS 
ARST 
RSTA 
*/
