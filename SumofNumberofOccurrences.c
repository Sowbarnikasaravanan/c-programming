// To calculate the sum of number of occurrences of string 2 in string 1
#include <stdio.h>
#include<string.h>
void main() {
    char a[30],b[30];
    int i,j,sum=0;
    printf("Enter the string 1:");
    scanf("%s",a);
    printf("Enter the string 2:");
    scanf("%s",b);
    for(i=0;i<strlen(b);i++){
        for(j=0;j<strlen(a);j++){
            if(b[i]==a[j]){
                sum++;
            }
        }
    }
        printf("The sum of the occurrences:%d",sum);
}

/*
Sample Output:
Enter the string 1:developer
Enter the string 2:dev
The sum of the occurrences:5
*/
