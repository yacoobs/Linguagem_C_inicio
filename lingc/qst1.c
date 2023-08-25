#include <stdio.h>

int main(){
    char nome[50];
    int idade;
    printf("escreva seu nome:\n");
    scanf("%s", nome);
    printf("Escreva sua idade:\n");
    scanf("%d", &idade);
    printf("Seu nome é %s, sua idade é %d\n", nome, idade);
}