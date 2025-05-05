#include <stdio.h>

int main() {
    int id;
    float nota1, nota2, nota3, media;

    printf("Digite o ID do estudante: ");
    scanf("%d", &id);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcular a média
    media = (nota1 + nota2 + nota3) / 3;

    // Exibir a média
    printf("ID do estudante: %d\n", id);
    printf("Média do estudante: %.2f\n", media);

    return 0;
}
