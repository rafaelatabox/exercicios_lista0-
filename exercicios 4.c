#include <stdio.h>

int main() {
  int idadeEmDias;

  printf("Digite a idade em dias: ");
  scanf("%d", &idadeEmDias);

  int anos = idadeEmDias / 365;
  int meses = (idadeEmDias % 365) / 30;
  int dias = (idadeEmDias % 365) % 30;

  printf("Idade em anos, meses e dias: %d anos, %d meses e %d dias\n", anos, meses, dias);

  return 0;
}
