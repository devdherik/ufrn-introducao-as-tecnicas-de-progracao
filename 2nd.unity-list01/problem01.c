#include <stdio.h>

int main(){
    
    double x;
    scanf("%lf", &x);

    double n[100];
    n[0] = x;

    printf("N[0] = %.4lf\n", n[0]);
    for (int i=1; i < 100; i++)
    {
        n[i] = n[i-1] / 2;
        printf("N[%d] = %.4lf\n", i, n[i]);
    }

    return 0;
}