#include <stdio.h>
int main(){
    double numeros[6];
    for (int i = 0; i<=5; i++)
    {
        scanf("%lf", &numeros[i]);
    }
    int quantidade = 0;
    for (int i=0; i<=5; i++)
    {
        if (numeros[i]>0)
        {
            quantidade += 1;
        }
    }
    printf("%d valores positivos\n", quantidade);
}