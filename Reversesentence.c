// To display the sentence in reverse using recursion 
#include<stdio.h>
void reverse();
void main() {
    printf("Enter the sentence:");
    reverse();
}

void reverse() {
    char ch;
    scanf("%c", &ch);
    if (ch != '\n') {
        reverse();
        printf("%c", ch);
    }
}
