#include <stdio.h>

int main() {
    char name[50];
    double fixedSalary, totalSales, finalSalary;

    scanf("%s %lf %lf", name, &fixedSalary, &totalSales);

    finalSalary = fixedSalary + (totalSales * 0.15);

    printf("TOTAL = R$ %.2lf\n", finalSalary);

    return 0;
}