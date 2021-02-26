#include <stdio.h>
int main(){
  int distancia;
  float litros, aux;

  printf("Informe a distancia: ");
  scanf("%d", &distancia);
  printf("Informe o combustivel gasto em litros: ");
  scanf("%f", &litros);

  aux = distancia/litros;

  printf("O consumo medio do veiculo eh: %.3f km/l", aux);
  return 0;

}
