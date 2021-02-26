#include <stdio.h>
int main(){
  float n1, n2, n3, aux;

  printf("Informe a primeira nota: ");
  scanf("%f", &n1);
  printf("Informe a segunda nota: ");
  scanf("%f", &n2);
  printf("Informe a terceira nota: ");
  scanf("%f", &n3);

  aux = ((n1*2) + (n2*3) + (n3*5))/10;

  printf("A media eh: %.1f", aux);
  return 0;

}
