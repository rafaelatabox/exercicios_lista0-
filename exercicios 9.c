#include <stdio.h>
#include <string.h>

#define MAX_CHAR 20

int main() {
    float altura;
    char genero[MAX_CHAR];

    
    printf("Introduza a altura (em metros): ");
    scanf("%f", &altura);

    printf("Introduza o género (masculino ou feminino): ");
    scanf("%s", genero);

    
    if (altura >= 1.80 && strcmp(genero, "masculino") == 0) {
        printf("O aluno tem uma altura acima da média para homens.\n");
    } else if (altura < 1.60 && strcmp(genero, "feminino") == 0) {
        printf("A aluna tem uma altura abaixo da média para mulheres.\n");
    } else {
        printf("A altura e o género não correspondem a nenhuma condição específica.\n");
    }

    return 0;
}