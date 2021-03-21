#include <stdio.h>
int main(){
  int i, n, aux, valor;

  printf("Digite a quantidade de numeros: ");
  scanf("%d", &n);

  aux=0;
  for (i=1; i<=n; i++)
  {
    printf("Digite o %dº numero: ", i);
    scanf("%d", &valor);

    if (valor > aux)
    {
      aux = valor;
    }
    else break;
  }
  if (i==n+1)
  {
    printf("A sequencia eh crescente");
  }
  else
  {
    printf("A sequencia eh decrescente");
  }
  return 0;
}
