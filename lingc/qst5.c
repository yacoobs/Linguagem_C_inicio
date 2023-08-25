#include <stdio.h>

int main(){
    int numero;
    printf("Informe o número escolhido:\n");
    scanf("%d", &numero);
    if(numero % 2 == 0) {
        printf("O número é par!\n");
    } else {
        printf("O número é ímpar!\n");
    }
    }


