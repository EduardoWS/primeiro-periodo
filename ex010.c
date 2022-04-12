#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Num frigorifico existem 90 bois. Cada boi traz preso em seu
//pescoço um cartao contendo seu numero de identificaçao (1 ate 90)
// e seu peso. Faça um algoritmo que escreva o numero e o peso do
//boi mais gordo e do boi mais magro (supondo os bois nao tem pesos
//iguais)
//(dica: Geraçao de numeros aleatorios: biblioteca stdlib.h, time.h
//   e funçoes: srand(time(null)) e rand()




int main(){

    int id[90]; //vetor com os n�meros de identifica��o
    float peso[90]; //peso dos bois
    int i;
    int indiceBoiGordo;
    int indiceBoiMagro;

    //iniciar os vetores
    srand(time(NULL));

    for(i = 0; i < 90; i++){
        id[i] = i+1;
        peso[i] = rand() % 1000;
        printf("id boi %d com peso %.2f kg\n", id[i], peso[i]);

    }

    indiceBoiGordo = 0;
    indiceBoiMagro = 0;
    for(i = 1; i < 90; i++){

        //descobrir qual eh o boi mais gordo
        if(peso[indiceBoiGordo] < peso[i]){
            indiceBoiGordo = i;
        }

        if(peso[indiceBoiMagro] > peso[i]){
            indiceBoiMagro = i;
        }
    }

    printf("O id do boi mais gordo eh %d e o peso eh %.2f kg\n",
           id[indiceBoiGordo], peso[indiceBoiGordo]);
    printf("O id do boi mais magro eh %d e o peso eh %.2f kg\n",
           id[indiceBoiMagro], peso[indiceBoiMagro]);


    return 0;
}