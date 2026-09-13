#include <stdio.h>

int main(){
    int x;
    int quantidade = 0;
    scanf("%d", &x);

    for(int i = x; quantidade<=5; i++){
        if (i%2!=0)
        {
            printf("%d\n", i);
            quantidade++;
        }
    }
}