//Program to find maxumim of 3 numbers

#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter three numbers separated by a space: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if (a > b && a > c)
        printf("%f is the highest", a);
    else if (b > a && b > c)
        printf("%f is the highest", b);
    else if (c > a && c > b)
        printf("%f is the highest", c);
    else
        printf("All the numbers are equal.");

    return 0;
}
