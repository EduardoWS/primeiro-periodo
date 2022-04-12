#include <stdio.h>

int main()
{
    int n1, n2, m; 
    printf("Digite o valor de n1: ");
    scanf("%d", &n1);
    printf("Digite o valor de n2: ");
    scanf("%d", &n2);
    
    m = n1 * n2;
    
    printf("o valor da multiplicacao %d x %d eh %d", n1, n2, m);


    return 0;
}