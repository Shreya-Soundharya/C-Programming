// Program to perform different operations on 2 numbers

#include <stdio.h>

int main() 
{
   int a,b,c;
   printf("Enter two numbers: ");
   scanf("%d%d", &a, &b);
   printf("\n");
   
   c = a+b;
   printf("\nSum of the two numbers is %d \n", c);
   c = a-b;
   printf("\nDifference of the two numbers is %d \n", c);
   c = a*b;
   printf("\nProduct of the two numbers is %d \n", c);
   c = a/b;
   printf("\nQuotient of the two numbers is %d \n", c);
   c = a%b;
   printf("\nRemainder of the two numbers is %d \n", c);
   
   return 0;
}