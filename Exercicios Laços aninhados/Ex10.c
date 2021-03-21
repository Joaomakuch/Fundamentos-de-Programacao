#include <stdio.h>
int main(){

  int n, i;

  printf("Digite o valor: ");
  scanf("%d", &n);
  printf("A divisão é perfeita para os numeros");
  for (i=1; i<20;i++)
  {
    if (n%i == 0)
    printf(" %d", i);
  }

  return 0;
}
