#include <stdio.h>

int main() {
    int num1;
    int num2;
    int num3;
    int num4;

    printf("o numero inteiro 1:\n");
    scanf("%d", &num1);
    printf("o numero inteiro 2:\n");
    scanf("%d", &num2);
    printf("o numero inteiro 3:\n");
    scanf("%d", &num3);
    printf("o numero inteiro 4:\n");
    scanf("%d", &num4);

    int soma = num1 + num2 + num3 + num4;
    long long produto = (long long)num1 * num2 * num3 * num4; 
    printf("A soma dos números é: %d\n", soma);
    printf("O produto dos números é: %lld\n", produto);

    return 0;
}