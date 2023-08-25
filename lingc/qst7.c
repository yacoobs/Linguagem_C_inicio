#include <stdio.h>

int main(){
    int nota;
    printf("Informe sua nota: \n");
    scanf("%d", &nota);
    if(nota >= 6){
        printf("Você está aprovado!\n");
    }else{
        printf("Você está reprovado!\n");
    }
}