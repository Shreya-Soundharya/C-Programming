// Program to print number pattern in reverse

#include <stdio.h>

int main() {
   int n,i,j;
   printf("Enter a number: ");
   scanf("%d",&n);
   printf("The pattern is: \n\n");
   for(i=n;i<=n;i--){
       for(j=1;j<=i;j++){
           printf("%d",i);
       }
       printf("\n");
   }
    return 0;
}