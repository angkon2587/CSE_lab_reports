#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;

    printf("Enter the electricity units consumed: ");
    scanf("%d", &units);

    if (units > 250) {
        bill += 250 * 0.50 + 100 * 0.75 + (units - 350) * 1.20;
    } else if (units > 150) {
        bill += 150 * 0.50 + (units - 150) * 0.75;
    } else {
        bill += units * 0.50;
    }

    if (bill > 250)
        bill += bill * 0.20;

    printf("Total electricity bill: Rs. %.2lf\n", bill);

    return 0;
}

