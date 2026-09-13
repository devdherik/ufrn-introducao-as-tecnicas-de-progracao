#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int menor, maior;

    if (x < y) {
        menor = x;
        maior = y;
    } else {
        menor = y;
        maior = x;
    }

    int soma = 0;

    for (int i = menor + 1; i < maior; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    printf("%d\n", soma);

    return 0;
}