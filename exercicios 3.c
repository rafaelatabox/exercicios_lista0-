#include <stdio.h>
#include <time.h>

int diasEntreDatas(int ano1, int mes1, int dia1, int ano2, int mes2, int dia2) {
  struct tm data1 = {0};
  data1.tm_year = ano1 - 1900;
  data1.tm_mon = mes1 - 1;
  data1.tm_mday = dia1;
  time_t tempo1 = mktime(&data1);

  struct tm data2 = {0};
  data2.tm_year = ano2 - 1900;
  data2.tm_mon = mes2 - 1;
  data2.tm_mday = dia2;
  time_t tempo2 = mktime(&data2);

  return (tempo2 - tempo1) / (24 * 3600);
}

int main() {
  int anoNascimento, mesNascimento, diaNascimento;
  time_t tempoAtual;
  struct tm *dataAtual;
  int anoAtual, mesAtual, diaAtual;
  int diasTotais, anos, meses, dias;

  // Obtém a data atual
  tempoAtual = time(NULL);
  dataAtual = localtime(&tempoAtual);
  anoAtual = dataAtual->tm_year + 1900;
  mesAtual = dataAtual->tm_mon + 1;
  diaAtual = dataAtual->tm_mday;

  printf("Digite o ano de nascimento: ");
  scanf("%d", &anoNascimento);
  printf("Digite o mês de nascimento: ");
  scanf("%d", &mesNascimento);
  printf("Digite o dia de nascimento: ");
  scanf("%d", &diaNascimento);

  diasTotais = diasEntreDatas(anoNascimento, mesNascimento, diaNascimento, anoAtual, mesAtual, diaAtual);

  anos = diasTotais / 365;
  meses = (diasTotais % 365) / 30; // Aproximação, pois os meses não têm sempre 30 dias
  dias = (diasTotais % 365) % 30;

  printf("\nSua idade é:\n");
  printf("%d anos, %d meses e %d dias\n", anos, meses, dias);

  return 0;
}
