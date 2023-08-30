#include <stdio.h>

int main() {
    int number, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Handle the case when the number is 0
    if (number == 0) {
        count = 1;
    } else {
        while (number != 0) {
            count++;
            number /= 10;
        }
    }

    printf("Number of digits in the given number is: %d\n", count);

    return 0;
}

