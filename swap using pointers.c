//Program to swap 2 numbers using pointers

#include <stdio.h>

void swap(int *p, int *q) {
    int y = *p;
    *p = *q;
    *q = y;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\nBefore swapping:");
    printf("\nThe first number is: %d.", num1);
    printf("\nThe second number is: %d.", num2);
    
    swap(&num1, &num2);
    
    printf("\n\nAfter swapping:");
    printf("\nThe first number is now: %d.", num1);
    printf("\nThe second number is now: %d.\n", num2);
    
    return 0;
}

