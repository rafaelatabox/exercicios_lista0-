#include <stdio.h>

int main() {
    int numeros[10];
    int i;

    printf("seus 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf(" os meus numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros digitados:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}