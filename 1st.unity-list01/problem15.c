#include <stdio.h>

int main() {
    int X;
    double Y, average_consumption;

    scanf("%d %lf", &X, &Y);

    average_consumption = (double)X / Y;

    printf("%.3lf km/l\n", average_consumption);

    return 0;
}