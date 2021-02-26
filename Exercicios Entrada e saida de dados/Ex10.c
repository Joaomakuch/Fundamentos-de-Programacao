#include <stdio.h>
int main(){
  int raio;
  float aux;
  printf("Informe o valor do raio: ");
  scanf("%d", &raio);

  aux = ((raio * raio * raio)*3.14159* 4)/3;

  printf("Volume: %.3f", aux);
  return 0;

}
