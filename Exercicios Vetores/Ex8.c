#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int v[], int n, int *maior, int *menor)
{
  int i, soma=0, k=0, aux;
  float media;
  srand(time(NULL));
  *maior = 0;
  *menor = 10;
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
    if (v[i]>*maior)
    {
      *maior = v[i];
    }
    if (v[i]<*menor)
    {
      *menor = v[i];
    }
  }
  media = soma/k;
  printf("\n");
  printf("Media dos pares: %.1f", media);
  printf("\nMaior valor do vetor: %d", *maior);
  printf("\n Menor valor do vetor: %d", *menor);
}

int main()
{
  int v[5], n, maior, menor;

  printf("Informe a quantidade de valores do vetor: ");
  scanf("%d", &n);

  preencheVetor(v, n, &maior, &menor);
  return 0;
}
