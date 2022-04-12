#include<stdio.h>

/* Chico tem 1,50 metro e cresce 2 centimetros por ano,
 enquanto Ze tem 1,10 metro e cresce 3 centimetros por ano.
 Construa um algoritmo que calcule e imprima quantos anos serao
  necessarios para que Ze seja maior que Chico.
  */
int main(){
    int chico = 150;
    int ze = 110;
    int ano = 0;

    while (ze <= chico){
        chico = chico + 2;
        ze = ze + 3;
        ano = ano + 1;
    }

    printf("A quantidade de anos para Ze ser maior que Chico eh: %d", ano);

    return 0;
}