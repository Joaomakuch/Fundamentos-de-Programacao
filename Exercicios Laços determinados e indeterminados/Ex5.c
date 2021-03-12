#include <stdio.h>
int main(){
  int n, i, aux=0;

  printf("Digite um numero inteiro: ");
  scanf("%d", &n);

  for (i=1; i<n+1; i++)
  {
    if (((n%i)==0) && n!=i)
    {
      aux += i;
    }
  }
  if (aux == n)
  {
    printf("O numero eh perfeito");
  }
  else
  {
    printf("O numero nao eh perfeito");
  }
  return 0;
}
