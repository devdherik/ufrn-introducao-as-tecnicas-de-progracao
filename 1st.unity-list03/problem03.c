#include <stdio.h>
int main(){
    double numeros[6];
    for (int i = 0; i<=5; i++)
    {
        scanf("%lf", &numeros[i]);
    }
    int quantidade = 0;
    double soma = 0;
    for (int i=0; i<=5; i++)
    {
        if (numeros[i]>0)
        {
            quantidade += 1;
            soma += numeros[i];
        }
    }
    double media = soma/quantidade;
    printf("%d valores positivos\n", quantidade);
    printf("%.1lf\n", media);
    
}