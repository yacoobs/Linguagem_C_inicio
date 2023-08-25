#include <stdio.h>

int main(){
  char nome[60];
  int idade, telefone;
  printf("Informe seu nome:\n");
  scanf("%s", nome);
  printf("Informe sua idade:\n");
  scanf("%d", &idade);
  printf("Informe seu número de telefone:\n");
  scanf("%d", &telefone);
  printf("Seu nome é %s, sua idade é %d e seu telefone é %d\n", nome, idade, telefone);
}