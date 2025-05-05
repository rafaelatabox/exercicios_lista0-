#include <stdio.h>

int main() {
    int num1, num2;
    float realNum;
    char c1, c2, c3;

 
    printf("primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("segundo numero inteiro: ");
    scanf("%d", &num2);

    printf(" um numero real: ");
    scanf("%f", &realNum);

    while (getchar() != '\n');

    printf("seus caracteres (separados por espaço): ");
    scanf("%c", &c1);
    scanf("%c", &c2);
    scanf("%c", &c3);

    printf("\nValores lidos:\n");
    printf("Inteiros: %d, %d\n", num1, num2);
    printf("Número real: %.2f\n", realNum);
    printf("Caracteres: '%c', '%c', '%c'\n", c1, c2, c3);

    return 0;
}
