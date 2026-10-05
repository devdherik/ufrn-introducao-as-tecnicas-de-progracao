#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int first = a, second = b, third = c;

    // Ordenar os valores
    if (first > second) {
        int temp = first;
        first = second;
        second = temp;
    }
    if (second > third) {
        int temp = second;
        second = third;
        third = temp;
    }
    if (first > second) {
        int temp = first;
        first = second;
        second = temp;
    }

    printf("%d\n%d\n%d\n\n", first, second, third);
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}