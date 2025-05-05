#include <stdio.h>

int main() {
    int A, B, C, soma;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &A, &B, &C);

    
    soma = A + B + C;

   
    printf("A soma dos números é: %d\n", soma);

    return 0;
}