#include <stdio.h>

int soma_numeros(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int n = 10;
    printf("Soma dos primeiros %d números naturais: %d\n", n, soma_numeros(n));
    return 0;
}
