#include <stdio.h>


int main(){
    /*
    Desenvolva um algoritmo que efetue a leitura de
    tr�s valores (A, B e C) e apresente como resultado
    final a soma dos quadrados dos tr�s valores lidos
    */

    int A, B, C;
    int saida;

    printf("Digite o valor de A:");
    scanf("%d",&A);
    printf("Digite o valor de B:");
    scanf("%d",&B);
    printf("Digite o valor de C:");
    scanf("%d",&C);

    saida = (A*A) + (B*B) + (C*C);

    printf("Saida: %d \n", saida);


    return 0;
}