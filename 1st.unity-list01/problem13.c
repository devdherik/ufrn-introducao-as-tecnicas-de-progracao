#include <stdio.h>
#define PI 3.14159

int main() {
    double A, B, C;
    double area_triangle, area_circle, area_trapezium, area_square, area_rectangle;

    scanf("%lf %lf %lf", &A, &B, &C);

    area_triangle = 0.5 * A * C;

    area_circle = PI * C * C;

    area_trapezium = 0.5 * (A + B) * C;

    area_square = B * B;

    area_rectangle = A * B;

    printf("TRIANGULO: %.3lf\n", area_triangle);
    printf("CIRCULO: %.3lf\n", area_circle);
    printf("TRAPEZIO: %.3lf\n", area_trapezium);
    printf("QUADRADO: %.3lf\n", area_square);
    printf("RETANGULO: %.3lf\n", area_rectangle);

    return 0;
}