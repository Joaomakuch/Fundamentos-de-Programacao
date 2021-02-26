#include <stdio.h>
int main (){
  float base, altura, aux;

  printf("Digite o valor da base: ");
  scanf("%f", &base);
  printf("Digite o valor da altura: ");
  scanf("%f", &altura);

  aux = (base*2) + (altura*2);

  printf("Valor do perimetro do retangulo: %.2f", aux);
  return 0;
}
