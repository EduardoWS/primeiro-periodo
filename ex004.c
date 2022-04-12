#include <stdio.h>

int main(){
    /*
    Desenvolva um algoritmo que receba uma hora
    formada por hora e minutos, e calcule a hora digitada
    apenas em minutos.
    */

    int horas, minutos;
    int saida;

    printf("digite as horas no formato hh:mm \n");
    scanf("%d:%d", &horas, &minutos);

    saida = horas*60 + minutos;

    printf("\ntotal de minutos: %d \n", saida);


    return 0;
}
