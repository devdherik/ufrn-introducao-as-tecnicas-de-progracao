#include <stdio.h>

int contaDigitos(int num) {
    int cont = 0;
    while (num > 0) {
        cont++;
        num /= 10;
    }
    return cont;
}

int main() {
    int n;

    while (scanf("%d", &n) == 1 && n != 0) {
        int maior_elem = 1 << ((n - 1) + (n - 1));
        int largura = contaDigitos(maior_elem);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int val = 1 << (i + j);

                if (j == 0) {
                    printf("%*d", largura, val);
                } else {
                    printf(" %*d", largura, val);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
