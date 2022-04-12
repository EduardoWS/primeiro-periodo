#include<stdio.h>

int main(){
    int cartas[10];
    int menorCarta, outraCarta;
    int i;

    //iniciar o nosso vetor/baralho ....
    //exemplos: 1 - pedir pro usuario; 2 - criar os numeros quaisquer;
    //          3 - criar numeros aleatorios

    for (i = 0; i < 10; i++){
        printf("Digite o valor na posicao cartas[%d]: ", i);
        scanf("%d", &cartas[i]);
    }


    //algoritmo para imprimir a menor carta de um vetor de baralho
    menorCarta = cartas[0];
    for(i = 1; i < 10; i++){
        outraCarta = cartas[i];
        if(menorCarta > outraCarta){
            menorCarta = outraCarta;
        }
    }

    printf("Valor da menor carta eh: %d", menorCarta);


    return 0;
}