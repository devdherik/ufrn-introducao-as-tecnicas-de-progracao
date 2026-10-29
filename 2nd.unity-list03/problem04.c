#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remover_quebra_linha(char texto[]);
void limpar_frase(const char frase[], char limpa[]);
void inverter(const char origem[], char destino[]);
int eh_palindromo(const char frase[]);

int main() {
    char frase[201];

    if (fgets(frase, sizeof(frase), stdin) == NULL) {
        return 0;
    }

    remover_quebra_linha(frase);

    if (eh_palindromo(frase)) {
        printf("palindromo\n");
    } else {
        printf("nao e palindromo\n");
    }

    return 0;
}

void remover_quebra_linha(char texto[]) {
    size_t tamanho = strlen(texto);

    if (tamanho > 0 && texto[tamanho - 1] == '\n') {
        texto[tamanho - 1] = '\0';
    }
}

void limpar_frase(const char frase[], char limpa[]) {
    int j = 0;

    for (int i = 0; frase[i] != '\0'; i++) {
        if (isalpha((unsigned char) frase[i])) {
            limpa[j] = (char) tolower((unsigned char) frase[i]);
            j++;
        }
    }
    limpa[j] = '\0';
}

void inverter(const char origem[], char destino[]) {
    size_t tamanho = strlen(origem);

    for (size_t i = 0; i < tamanho; i++) {
        destino[i] = origem[tamanho - 1 - i];
    }
    destino[tamanho] = '\0';
}

int eh_palindromo(const char frase[]) {
    char limpa[201];
    char invertida[201];

    limpar_frase(frase, limpa);
    inverter(limpa, invertida);

    return strcmp(limpa, invertida) == 0;
}
