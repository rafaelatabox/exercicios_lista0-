#include <stdio.h>

int main() {
    float valor1, valor2, valor3;

    printf("Digite o primeiro valor real: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor real: ");
    scanf("%f", &valor2);

    printf("Digite o terceiro valor real: ");
    scanf("%f", &valor3);

    printf("Os valores digitados foram: %.2f, %.2f, %.2f\n", valor1, valor2, valor3);

    return 0;
}
