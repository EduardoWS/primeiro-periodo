#include<stdio.h>

int main(){
    int vetor[10];
    int i;

    for (i = 0; i < 10; i++){
        printf("Digite o valor na posicao vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    //imprimir na ordem inversa
    for(i = 9; i >= 0; i--){
        printf("vetor[%d] = %d \n", i, vetor[i]);
    }

    return 0;
}