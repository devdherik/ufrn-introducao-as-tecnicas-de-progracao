#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remover_quebra_linha(char texto[]);
void montar_email(char nome[], char email[]);
void converter_minusculas(char texto[]);

int main() {
    char nome[64];
    char email[100];

    if (fgets(nome, sizeof(nome), stdin) == NULL) {
        return 0;
    }

    remover_quebra_linha(nome);
    montar_email(nome, email);
    converter_minusculas(email);

    printf("email: %s\n", email);

    return 0;
}

void remover_quebra_linha(char texto[]) {
    size_t tamanho = strlen(texto);

    if (tamanho > 0 && texto[tamanho - 1] == '\n') {
        texto[tamanho - 1] = '\0';
    }
}

void montar_email(char nome[], char email[]) {
    char *primeiro = strtok(nome, " ");
    char *ultimo = primeiro;
    char *parte;

    email[0] = '\0';
    if (primeiro == NULL) {
        return;
    }

    while ((parte = strtok(NULL, " ")) != NULL) {
        ultimo = parte;
    }

    strcpy(email, primeiro);
    if (ultimo != primeiro) {
        strcat(email, ".");
        strcat(email, ultimo);
    }
    strcat(email, "@ufrn.edu.br");
}

void converter_minusculas(char texto[]) {
    for (int i = 0; texto[i] != '\0'; i++) {
        texto[i] = (char) tolower((unsigned char) texto[i]);
    }
}
