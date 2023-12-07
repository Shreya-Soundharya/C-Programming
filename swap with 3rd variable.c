// Program to swap 2 numbers with a third variable

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("\nEnter the second number: ");
    scanf("%d", &num2);
    
    printf("\nBefore swapping:");
    printf("\nThe first number is: %d.", num1);
    printf("\nThe second number is: %d.", num2);

    int temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\n\nAfter swapping:");
    printf("\nThe first number is now: %d.", num1);
    printf("\nThe second number is now: %d.\n", num2);

    return 0;
}
