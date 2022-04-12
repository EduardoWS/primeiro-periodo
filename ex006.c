#include<stdio.h>
#include <stdlib.h> // necessario p/ as funcoes rand() e srand()
#include<time.h>    //necessario p/ funcao time()

int main(){
    int vetor[30];
    int i;

    srand(time(NULL));

    for (i = 0; i < 30; i++){
        vetor[i] = rand() % 1000;
        printf("vetor[%d] = %d \n", i, vetor[i]);
    }


    //imprimir na ordem inversa
    for(i = 0; i < 30; i++){
       if(vetor[i] % 3 == 0){
            printf("valor vetor[%d] = %d eh divisivel por 3\n", i, vetor[i]);
       }
    }

    return 0;
}