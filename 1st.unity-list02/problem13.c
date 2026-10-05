#include <stdio.h>

int main(void) {
    int S, T, F;
    scanf("%d %d %d", &S, &T, &F);

    int chegada = S + T + F;
    if (chegada >= 24) {
        chegada -= 24;
    }
    if (chegada < 0) {
        chegada += 24;
    }

    printf("%d\n", chegada);

    return 0;
}