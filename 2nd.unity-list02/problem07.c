#include <stdio.h>

#define TAM 12

int main() {
    int coluna_alvo;
    char operacao;
    double M[TAM][TAM];
    double soma = 0.0;

    if (scanf("%d", &coluna_alvo) != 1) return 0;
    if (scanf(" %c", &operacao) != 1) return 0;

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (int i = 0; i < TAM; i++) {
        soma += M[i][coluna_alvo];
    }

    if (operacao == 'S') {
        printf("%.1f\n", soma);
    } else if (operacao == 'M') {
        printf("%.1f\n", soma / TAM);
    }

    return 0;
}
