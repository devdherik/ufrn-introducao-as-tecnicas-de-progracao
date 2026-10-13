#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j;

    printf("Digite os valores da matriz %dx%d:\n", LINHAS, COLUNAS);

    // 1. Leitura dos dados
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // 2. Impressão formatada
    printf("\n--- Matriz Digitada ---\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%4d ", matriz[i][j]); // %4d alinha em colunas de 4 espaços
        }
        printf("\n"); // Quebra de linha ao fim de cada linha da matriz!
    }

    return 0;
}