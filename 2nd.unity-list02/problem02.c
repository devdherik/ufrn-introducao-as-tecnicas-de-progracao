#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) == 1) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == n - 1 - i) {
                    printf("2");
                } else if (i == j) {
                    printf("1");
                } else {
                    printf("3");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
