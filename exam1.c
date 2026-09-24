#include <stdio.h>

int classificar_latencia(double milissegundos);

int main(void)
{
    int quantidade;
    int perdidos = 0;
    int boa = 0;
    int alta = 0;
    double latencia;
    double soma = 0.0;

    printf("Quantidade de pings: ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++){
        printf("Latencia do ping (ms): ");
        scanf("%lf", &latencia);

        if (latencia == -1.0) {
            perdidos++;
        } else{
            soma += latencia;
            int classe = classificar_latencia(latencia);

            if (classe == 0) {
                boa++;
            } else if (classe == 2){
                alta++;
            }
        }
    }

    printf("Quantidade de pings: %d\n", quantidade);
    printf("Pacotes perdidos: %d\n", perdidos);
    printf("Soma das latencias: %.1f ms\n", soma);
    printf("Boa: %d\n", boa);
    printf("Alta: %d\n", alta);
    
    return 0;
}

int classificar_latencia(double milissegundos)
{
    if (milissegundos < 50.0) {
        return 0;
    }
    else if (milissegundos < 150.0) {
        return 1;
    }
    else {
        return 2;
    }
}