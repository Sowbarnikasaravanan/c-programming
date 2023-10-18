// To count the number of vowels and consonants
#include<stdio.h>
#include<string.h>
void main(){
    char a[30],i;
    printf("Enter the string:");
    for(i=0;i<='\n';i++){
        scanf("%c",&a[i]);
    }
    int count=0,c=0;
    char ch;
    for(int i=0;i<strlen(a);i++){
            ch=a[i];
            if(ch=='A'|| ch=='a' || ch=='E'||ch=='e'||ch=='I'|| ch=='i' || ch=='O'||ch=='o'||ch=='U' || ch=='u'){
                c++;
            }
            else{
                if((ch>='B'&& ch<='Z')||(ch>='b'&&ch<='z')){
                    count++;
            }
        }
    }
        printf("The number of vowels: %d \n",c);
        printf("The number of consonants:%d",count);
}
