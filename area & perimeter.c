//Program to find area and perimiter of 4 shapes

#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float side1, side2, side3, length, width, base, height, area, perimeter;

    printf("Choose a shape:\n1. Circle\n2. Rectangle\n3. Triangle\n4. Square\n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Circle
            printf("Enter the radius of the circle: ");
            scanf("%f", &side1);

            if (side1 <= 0) {
                printf("Invalid radius. Please enter a positive value.\n");
                return 1;
            }

            area = 3.14 * side1 * side1;
            perimeter = 2 * 3.14 * side1;
            break;

        case 2:
            // Rectangle
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);

            if (length <= 0 || width <= 0) {
                printf("Invalid dimensions. Please enter positive values for length and width.\n");
                return 1;
            }

            area = length * width;
            perimeter = 2 * (length + width);
            break;

        case 3:
            // Triangle
            printf("Enter the three sides of the triangle: ");
            scanf("%f %f %f", &side1, &side2, &side3);

            if (side1 <= 0 || side2 <= 0 || side3 <= 0 || (side1 + side2 <= side3) || (side1 + side3 <= side2) || (side2 + side3 <= side1)) {
                printf("Invalid dimensions. The sum of any two sides must be greater than the third side.\n");
                return 1;
            }
            
            float s = (side1 + side2 + side3) / 2;
            area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
            perimeter = side1 + side2 + side3;
            break;

        case 4:
            // Square
            printf("Enter the side length of the square: ");
            scanf("%f", &side1);

            if (side1 <= 0) {
                printf("Invalid side length. Please enter a positive value.\n");
                return 1;
            }

            area = side1 * side1;
            perimeter = 4 * side1;
            break;

        default:
            printf("Invalid choice. Please choose a valid shape.\n");
            return 1;
    }

    printf("The area is %.2f\n", area);
    printf("The perimeter is %.2f\n", perimeter);

    return 0;
}
