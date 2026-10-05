#include <stdio.h>

int main() {
    int N;
    int banknotes[7] = {100, 50, 20, 10, 5, 2, 1};
    int quantities[7] = {0};

    scanf("%d", &N);

    printf("%d\n", N);

    for (int i = 0; i < 7; i++) {
        quantities[i] = N / banknotes[i];
        N %= banknotes[i];
        printf("%d nota(s) de R$ %d,00\n", quantities[i], banknotes[i]);
    }

    return 0;
}