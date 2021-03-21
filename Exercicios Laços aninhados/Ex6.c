#include <stdio.h>
int main(){

  int n, i, cres = 1, decres = 1, a, b;

  printf("Digite a quantidade de numeros que deseja inserir: ");
  scanf("%d", &n);

  if (n<=1)
  {
    printf("Não eh possivel calcular a sequencia");
    return 0;
  }

  for(i=0; i<n; i++)
  {
    printf("Digite o %dº numero: ", i+1);
    scanf("%d", &a);

    if (i==0)
    {
      b = a;
    }
      else
      {
        if (a > b)
        {
        decres = 0;
        }
        if (a < b)
        {
        cres = 0;
        }
      b = a;
    }
  }
  printf("\nA sequencia eh ");
  if (cres == decres)
  {
    printf("desordenada");
  }
  else
  {
    if (cres)
    {
      printf("crescente");
    }
    if (decres)
    {
      printf("decrescente");
    }
  }
 return 0;
}
