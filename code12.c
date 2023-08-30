#include <stdio.h>

int main() {
    int num, rev = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);
    int a=num;




    while (a != 0) {
        remainder = a % 10;
        rev = rev * 10 + remainder;
         a /= 10;
    }

    printf("Reverse of the number is: %d\n", rev);

    if (num==rev)
    {
        printf("The number is a palindrome number\n");

    }
    else
    {

         printf("The number is not a palindrome number.");
    }

    return 0;
}
