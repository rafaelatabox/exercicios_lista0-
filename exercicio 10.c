#include <stdio.h>

int main() {
    int inicio_horas;
    int inicio_minutos;
    int fim_horas;
    int fim_minutos;

    printf("a hora de inicio do jogo (horas minutos):\n");
    scanf("%d %d", &inicio_horas, &inicio_minutos);

    printf("a hora do fim do jogo (horas minutos):\n");
    scanf("%d %d", &fim_horas, &fim_minutos);

    int inicio_total_minutos = inicio_horas * 60 + inicio_minutos;
    int fim_total_minutos = fim_horas * 60 + fim_minutos;

    int duracao_total_minutos = fim_total_minutos - inicio_total_minutos;

    printf("A duração do jogo é de: %d horas e %d minutos.\n", duracao_total_minutos / 60, duracao_total_minutos % 60);

    return 0;
}