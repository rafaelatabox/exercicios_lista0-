#include <stdio.h>

int main() {
    int num1; 
    int num2; 
    int soma;

    printf("o meu primeiro numero: ");
    scanf("%d", &num1);

    printf(" o meu segundo numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("A soma de %d e %d é %d.\n", num1, num2, soma);

    return 0;
}