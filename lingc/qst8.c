#include<stdio.h>

int main(){
    int numero;
    printf("Informe o número escolhido:\n");
    scanf("%d", &numero);
    if(numero < 0) {
        printf("O número é negativo!\n");
    }else if(numero > 0){
        printf("O número é positivo!\n");
    }else{
        printf("O número é 0!\n");
    }
}