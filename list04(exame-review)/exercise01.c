#include <stdio.h>

double desconto_por_pontos(int pontos);

int main(void){

    int pontos = 0;
    double conta = 0.0;
    double desconto = 0.0;
    printf("Pontos acumulados: ");
    scanf("%d", &pontos);
    printf("Valor da conta: ");
    scanf("%lf", &conta);
    desconto = desconto_por_pontos(pontos);
    printf("desconto de %.0f%%, a pagar R$ %.2f\n",
            desconto * 100.0, conta * (1.0 - desconto));
    return 0;

}

double desconto_por_pontos(int pontos){

    if (pontos >= 200 && pontos >500){
        return 0.05;
    } else if(pontos >=500 && pontos <1000){
        return 0.1;
    } else if(pontos <=1000){
        return 0.15;
    }
    return 0.0;

}
