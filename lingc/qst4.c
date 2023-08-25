#include <stdio.h>

int main(){
    int numero;
    printf("Informe o número escolhido:\n");
    scanf("%d", &numero);
    printf("O quadrado é: %d e o cubo é: %d\n", numero * numero, numero * numero * numero);
}