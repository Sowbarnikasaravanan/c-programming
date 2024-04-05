//To find the unit digit of a number
#include <stdio.h>
void main() {
    int n,unit;
    printf("Enter the number:");
    scanf("%d",&n);
    unit=n%10;
    printf("The unit digit of %d is %d",n,unit);
}
/* Sample Output:
Enter the number:56789
The unit digit of 56789 is 9
*/
