#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remover_quebra_linha(char texto[]);
void converter_maiusculas(char texto[]);
int contar_base(const char dna[], char base);

int main() {
    char dna[101];

    if (fgets(dna, sizeof(dna), stdin) == NULL) {
        return 0;
    }

    remover_quebra_linha(dna);
    converter_maiusculas(dna);

    printf("tamanho: %zu\n", strlen(dna));
    printf("A: %d, C: %d, G: %d, T: %d\n",
           contar_base(dna, 'A'), contar_base(dna, 'C'),
           contar_base(dna, 'G'), contar_base(dna, 'T'));

    return 0;
}

void remover_quebra_linha(char texto[]) {
    size_t tamanho = strlen(texto);

    if (tamanho > 0 && texto[tamanho - 1] == '\n') {
        texto[tamanho - 1] = '\0';
    }
}

void converter_maiusculas(char texto[]) {
    for (int i = 0; texto[i] != '\0'; i++) {
        texto[i] = (char) toupper((unsigned char) texto[i]);
    }
}

int contar_base(const char dna[], char base) {
    int quantidade = 0;

    for (int i = 0; dna[i] != '\0'; i++) {
        if (dna[i] == base) {
            quantidade++;
        }
    }

    return quantidade;
}
