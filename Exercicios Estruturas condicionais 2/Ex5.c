#include <stdio.h>
int main(){
  float a, g, ra, rg, aux, aux1;

  printf("Informe o preco do alcool: ");
  scanf("%f", &a);
  printf("Informe o preco da gasolina: ");
  scanf("%f", &g);
  printf("Informe o rendimento do carro com alcool(km/l): ");
  scanf("%f", &ra);
  printf("Informe o rendimento do carro com gasolina(km/l): ");
  scanf("%f", &rg);

if (ra/a < rg/g)

printf("Gasolina eh melhor");

else if (ra/a > rg/g)

printf("Alcool eh melhor");

else

printf("Gasolina eh melhor");

return 0;


}
