#include <stdio.h>

double desconto_por_pontos(int pontos);
double valor_conta_com_desconto(double conta, double desconto);
double ler_valor_da_compra(void);
int calcular_pontos(double valor_de_compra);
void exibir_extrato(int contagem_vendas, double soma_de_vendas);

int main(void){

    int pontos = 0;
    double conta = 0.0;
    double valor_conta_operacao;
    double desconto = 0.0;
    int contagem_vendas = 0;
    double soma_vendas = 0.0;
    
    do {
        printf("Pontos acumulados: ");
        scanf("%d", &pontos);

        if (pontos<0)
        {
            break;
        }
        
        conta = ler_valor_da_compra();
        desconto = desconto_por_pontos(pontos);
        valor_conta_operacao = valor_conta_com_desconto(conta, desconto);
        printf("desconto de %.0f%%, a pagar R$ %.2f\n",
                desconto * 100.0, valor_conta_operacao);

        contagem_vendas ++;
        soma_vendas += valor_conta_operacao;
    } while (pontos >= 0);

    printf("Foram realizadas %d vendas\n", contagem_vendas);
    printf("Total vendido %.2f\n", soma_vendas);
             
    return 0;   
}

double valor_conta_com_desconto(double conta, double desconto){
    return conta*(1.0 - desconto);
}

double desconto_por_pontos(int pontos){
    if (pontos >= 200 && pontos <500){
        return 0.05;
    } else if(pontos >=500 && pontos <1000){
        return 0.10;
    } else if(pontos >=1000){
        return 0.15; 
    }
    return 0.0;
}


double ler_valor_da_compra(void){
    double valor_da_compra;
    do
    {
        printf("Insira o valor da compra\n");
        scanf("%lf", &valor_da_compra);
    } while (valor_da_compra < 0);
    return valor_da_compra;
}

int calcular_pontos(double valor_de_compra){
    return (int) valor_de_compra;
}

void exibir_extrato(int contagem_vendas, double soma_de_vendas);

