//Program to convert Farenheit to Celcius nd vice versa

#include <stdio.h>

int main() {
   float Fahrenheit, Celsius; 
   int choice;

   printf("Options available: \n1. To convert Celsius to Fahrenheit.\n2. To convert Fahrenheit to Celsius.\n\n");
   printf("Enter your choice: ");
   scanf("%d", &choice);

   switch (choice) {
       case 1:
        printf("Enter a temperature in Celsius: ");
        scanf("%f", &Celsius);
        Fahrenheit = (Celsius * 9) / 5 + 32;  
        printf("\nThe temperature is %.2f°F", Fahrenheit);
        printf("\n");
        break;  

    case 2:
        printf("Enter a temperature in Fahrenheit: ");
        scanf("%f", &Fahrenheit);
        Celsius = (Fahrenheit - 32) * 5 / 9;  
        printf("\nThe temperature is %.2f°C", Celsius);
        printf("\n");
        break;  

    default:
        printf("Invalid choice. Try again.\n");
        printf("\n");
   }

   return 0;
}
