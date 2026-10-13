#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;

    int pos_anterior = -1;
    bool viu_linha_zero = false;
    bool eh_escada = true;

    for (int i = 0; i < n; i++) {
        int pos_atual = -1;

        for (int j = 0; j < m; j++) {
            int val;
            scanf("%d", &val);

            if (val != 0 && pos_atual == -1) {
                pos_atual = j;
            }
        }

        if (pos_atual == -1) {
            viu_linha_zero = true;
        } else {
            if (viu_linha_zero) {
                eh_escada = false;
            }
            if (pos_atual <= pos_anterior) {
                eh_escada = false;
            }
            pos_anterior = pos_atual;
        }
    }

    if (eh_escada) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
