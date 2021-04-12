#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int v[], int n)
{
  int i, soma=0, k=0, aux;
  float media;
  srand(time(NULL));
  for (i=0; i<n; i++)
  {
    v[i] = rand()%10;
    printf("Numero %d = %d\n", i, v[i]);
  }

  for (i=0; i<n; i++)
  {
    aux = v[i] % 2;
    if (aux == 0)
    {
      soma = soma + v[i];
      k++;
    }
  }
  media = soma/k;
  printf("\n");
  printf("Media dos pares: %.1f", media);
}

int main()
{
  int v[5], n;

  printf("Informe a quantidade de valores do vetor: ");
  scanf("%d", &n);

  preencheVetor(v, n);
  return 0;
}
