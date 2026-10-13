#include <stdio.h>
#include <string.h>

int main() {
    char mat[4][100];

    for (int i = 0; i < 4; i++) {
        scanf("%s", mat[i]);
    }

    int colunas = strlen(mat[0]);

    int F = (mat[0][0] - '0') * 1000 + 
            (mat[1][0] - '0') * 100 +
            (mat[2][0] - '0') * 10 +
            (mat[3][0] - '0');

    int ult = colunas - 1;
    int L = (mat[0][ult] - '0') * 1000 +
            (mat[1][ult] - '0') * 100 +
            (mat[2][ult] - '0') * 10 +
            (mat[3][ult] - '0');

    for (int j = 1; j < colunas - 1; j++) {
        int M = (mat[0][j] - '0') * 1000 + 
                (mat[1][j] - '0') * 100 +
                (mat[2][j] - '0') * 10 +
                (mat[3][j] - '0');

        char letra = (F * M + L) % 257;
        printf("%c", letra);
    }
    printf("\n");

    return 0;
}