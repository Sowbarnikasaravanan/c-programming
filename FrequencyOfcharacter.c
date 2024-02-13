// To find the frequency of a character
#include <stdio.h>
int main() {
    char str[50],c;
    int i,count=0;
    printf("Enter the string:");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character to check:");
    scanf("%c",&c);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (c == str[i])
            ++count;
    }
    printf("%c is occurred %d times in a string",c,count);
    return 0;
}

/*
Sample output:
Enter the string:sowbarnika
Enter the character to check:a
a is occurred 2 times in a string
*/
