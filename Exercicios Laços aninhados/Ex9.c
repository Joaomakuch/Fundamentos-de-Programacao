#include <stdio.h>
int main(){

  int n, primo, i, a, div, soma=0, b;

  printf("Digite a quantidade de numeros que deseja inserir: ");
  scanf("%d", &n);

  primo = 1;
  for(i=0; i<n; i++)
  {
    printf("Digite o %dº numero: ", i+1);
    scanf("%d", &a);

    for (div = 2; div<a; div++)
    {
      if (a%div==0)
      {
        primo=0;
      }
    }
    if (a == 1)
    {
      primo = 0;
    }
    if (primo == 1)
    {
      soma = soma + a;
    }
    primo = 1;

  }
  printf("A soma dos numeros primos é %d", soma);
  return 0;
}
