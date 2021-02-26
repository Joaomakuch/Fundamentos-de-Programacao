#include <stdio.h>
int main(){
  int pedagios;
  float distancia, aux;

  printf("Informe a distancia: ");
  scanf("%f", &distancia);
  printf("Informe a quantidade de pedagios no trajeto: ");
  scanf("%d", &pedagios);

  aux = ((distancia/15)*2.6) + (pedagios * 8);

  printf("Gasto total durante a viagem: %.2f", aux);
  return 0;
}
