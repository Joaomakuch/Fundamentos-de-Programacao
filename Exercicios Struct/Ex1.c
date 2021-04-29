#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
int horas;
int minutos;
int segundos;
}Tempo;

int main()
{
  Tempo x;
  int segundos;

  printf("Informe os segundos: ");
  scanf("%d", &segundos);

  x.horas = (segundos/60)/60;
  x.minutos = (segundos/60)%60;
  x.segundos = (segundos%60)%60;

  printf("Horas: %d\nMinutos: %d\nSegundos: %d", x.horas, x.minutos, x.segundos);
  return 0;
}
