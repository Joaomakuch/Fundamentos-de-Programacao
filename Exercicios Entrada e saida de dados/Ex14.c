#include <stdio.h>
int main(){
  int valor;
  printf("Digite o valor: ");
  scanf("%d", &valor);

  printf("Notas de 50 R$: %d\n", valor / 50);
  printf("Notas de 5 R$: %d\n", valor % 50 / 5);
  printf("Notas de 1 R$: %d\n", valor % 50 % 5);
  return 0;
}
