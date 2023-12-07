#include <stdio.h>
struct Employee {
   char ename[50];
   char empid[10];
   char designation;
   int basic;
   int travel;
   int dearness;
};

int main() {
    int i,n;
    printf("Enter number of employee records to be entered");
    scanf("%d",&n);
    struct Employee e[n];
    for (i=0;i<n;i++){
       
        printf("Enter employee name: ");
        scanf("%s", &e[i].ename);

        printf("\nEnter employee ID: ");
        scanf("%s", &e[i].empid);
   
        printf("\nEnter employee designation: ");
        scanf("%s", &e[i].designation);

        printf("\nEnter employee baisc pay: ");
        scanf("%d", &e[i].basic);
   
        printf("\nEnter employee travel allowance: ");
        scanf("%d", &e[i].travel);

        printf("\nEnter employee dearness allowance: ");
        scanf("%d", &e[i].dearness);
   
        int gross;
        gross = e[i].basic + e[i].travel + e[i].dearness;
   
    }
 
   printf("\nDisplaying information\n");
   printf("\nName\tEmployee ID\tDesignation\t Basic Salary\tTravel Allowance\tDearness Allowance\tGross Salary\n");
   
   for (int i = 0; i < n; i++) {
       printf(e[i].ename"\t"e[i].empid"\t"e[i].designation"\t"e[i].basic"\t"e[i].travel"\t"e[i].dearness"\t"gross"\n");
}
}
