#include <stdio.h>

int main(){
    int base, altura;
    printf("Escreva a base do triângulo:\n");
    scanf("%d", &base);
    printf("Escreva a altura do triâgulo:\n");
    scanf("%d", &altura);
    printf("A área do triângulo é %d\n", base * altura / 2);
}