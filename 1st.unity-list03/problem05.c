#include <stdio.h>
int main(){
    int numeros[5];
    for (int i=0; i<=4; i++){
        scanf("%d", &numeros[i]);
    }

    int quantidade_par = 0;
    int quantidade_impar = 0;
    int quantidade_positivo = 0;
    int quantidade_negatvo = 0;

    for (int i = 0; i <=4; i++)
    {
        if (numeros[i]%2==0)
        {
            quantidade_par += 1;
        }
    }

    for (int i = 0; i <=4; i++)
    {
        if (numeros[i]%2!=0)
        {
            quantidade_impar += 1;
        }
    }

    for (int i = 0; i <=4; i++)
    {
        if (numeros[i]>0)
        {
            quantidade_positivo += 1;
        }
    }

    for (int i = 0; i <=4; i++)
    {
        if (numeros[i]<0)
        {
            quantidade_negatvo += 1;
        }
    }

    printf("%d valor(es) par(es)\n", quantidade_par);
    printf("%d valor(es) impar(es)\n", quantidade_impar);
    printf("%d valor(es) positivo(s)\n", quantidade_positivo);
    printf("%d valor(es) negativo(s)\n", quantidade_negatvo);
}