#include <stdio.h>
int main(){
  int numero;
  printf("Digite um numero: ");
  scanf("%d", &numero);

  numero = numero % 10;

  printf("O ultimo digito eh:%d", numero);
  return 0;
}
