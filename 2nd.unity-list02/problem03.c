#include <stdio.h>

int menor(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int n;

    while (scanf("%d", &n) == 1 && n != 0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int dist_cima = i;
                int dist_baixo = n - 1 - i;
                int dist_esq = j;
                int dist_dir = n - 1 - j;

                int menor_dist = menor(menor(dist_cima, dist_baixo), menor(dist_esq, dist_dir));
                int valor = menor_dist + 1;

                if (j == 0) {
                    printf("%3d", valor);
                } else {
                    printf(" %3d", valor);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
