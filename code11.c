#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    
    int tempNumber = number;
    while (tempNumber != 0) {
        digit = tempNumber % 10;
        sum += digit;
        tempNumber /= 10;
    }

    printf("Sum of digits of %d is: %d\n", number, sum);

    return 0;
}
