#include <stdio.h>


int main(){
    /*
    Desenvolva um algoritmo que receba tres notas e
    seus respectivos pesos, calcule e mostre a media
    ponderada entre essas notas.
    */

    double n1, n2, n3; //notas
    double p1, p2, p3; //pesos
    double media;      //saida

    printf("Digite o valor de n1: ");
    scanf("%lf", &n1);
    printf("Digite o valor de p1: ");
    scanf("%lf", &p1);

    printf("Digite o valor de n2: ");
    scanf("%lf", &n2);
    printf("Digite o valor de p2: ");
    scanf("%lf", &p2);

    printf("Digite o valor de n3: ");
    scanf("%lf", &n3);
    printf("Digite o valor de p3: ");
    scanf("%lf", &p3);

    media = (n1*p1 + n2*p2 + n3*p3)/(p1+p2+p3);

    printf("\n media = %.1lf \n", media);


    return 0;
}