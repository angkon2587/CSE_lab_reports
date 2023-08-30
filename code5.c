#include <stdio.h>

int main()
{
    int n;

    // Input the value of n
    printf("Enter a natural number (n): ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0)
    {
        printf("Please enter a positive natural number.\n");
        return 1;
    }

    // Printing the numbers in reverse using a while loop and n++
    printf("Natural numbers in reverse from %d to 1:\n", n);
    while (n >= 1)
    {
        printf("%d ", n);
        n--;
    }
    printf("\n");

    return 0;
}
#