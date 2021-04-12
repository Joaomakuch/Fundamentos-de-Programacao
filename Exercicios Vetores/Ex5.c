#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int v[], int n)
{
  int i;
  srand(time(NULL));
  for (i=0; i<n; i++)
  {
    v[i] = rand()%10;
    printf("Numero %d = %d\n", i, v[i]);
  }
}

int main()
{
  int v[5], n;

  printf("Informe a quantidade de valores do vetor: ");
  scanf("%d", &n);

  preencheVetor(v, n);
  return 0;
}
