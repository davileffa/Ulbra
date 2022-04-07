#include <stdio.h>

int main () {
    int n1, n2, n3, n4;
    int soma;

    printf("digite um numero: \n");
    scanf("%d%*c", &n1);
    printf("Digite outro número: \n");
    scanf("%d%*c", &n2);
    printf("Digite outro número: \n");
    scanf("%d%*c", &n3);
    printf("Digite outro número: \n");
    scanf("%d%*c", &n4);
    soma = (n1 + n2 + n3 + n4);

    printf("A soma dos numeros %d, %d, %d e %d e: %d \n", n1, n2, n3, n4, soma);
    return 0;
}