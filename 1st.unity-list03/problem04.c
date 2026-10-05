#include <stdio.h>
int main(){
    int numeros[5];
    for (int i=0; i<=4; i++){
        scanf("%d", &numeros[i]);
    }
    int quantidade = 0;
    for (int i = 0; i <=4; i++)
    {
        if (numeros[i]%2==0)
        {
            quantidade += 1;
        }
    }
    printf("%d valores pares\n", quantidade);
}