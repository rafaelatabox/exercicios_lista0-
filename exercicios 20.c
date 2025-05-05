#include <stdio.h>

int main() {
    int x, dobro;

    printf("Digite um número: ");
    scanf("%d", &x);

    dobro = 2 * x;

    printf("O dobro de %d é %d\n", x, dobro);

    return 0;
}
