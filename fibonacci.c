//Program to print Fibonacci series

#include <stdio.h>

int main() {
    int n,a=0,b=1,sum;
    printf("Enter a numbr: ");
    scanf("%d",&n);
    printf("The fibonacci series is: ");
    printf("%d ",a);
    printf(" %d ",b);
    for(int i=0;i<n-2;i++){
       sum=a+b;
       a=b;
       b=sum;
       printf(" %d ",sum);
    }
    return 0;
}