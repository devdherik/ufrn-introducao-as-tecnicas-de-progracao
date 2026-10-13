#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) == 1) {
        int inicio_miolo = n / 3;
        int fim_miolo = n - n / 3;
        int centro = n / 2;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == centro && j == centro) {
                    printf("4");
                } else if (i >= inicio_miolo && i < fim_miolo && j >= inicio_miolo && j < fim_miolo) {
                    printf("1");
                } else if (i == j) {
                    printf("2");
                } else if (j == n - 1 - i) {
                    printf("3");
                } else {
                    printf("0");
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
