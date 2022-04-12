#include<stdio.h>


int main(){
    int n;
    int resultado;
    int i;

    printf("Digite o n-esimo termo: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        resultado = i * i;
        printf("%d ", resultado);
    }

/*  //resolvendo o problema usando while
    i = 1;
    while (i <= n){
        resultado = i*i;
        printf("%d ", resultado);
        i++;
    }
*/

    return 0;
}