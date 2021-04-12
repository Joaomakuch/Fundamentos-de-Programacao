#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int direto(int v[], int n)
{
  int i;
  printf("Ordem direta\n\n");
  for (i=0; i<n; i++)
  {
    printf("Numero %d = %d\n", i, v[i]);
  }
  return 0;
}

int inverso(int v[], int n)
{
  int i;
  printf("Ordem inversa\n\n");
  for (i=n-1; i>=0; i--)
  {
    printf("Numero %d = %d\n", i, v[i]);
  }
 return 0;
}

int main()
{
  int v[5], n, i, res, res1;
  srand(time(NULL));
  printf("Informe a quantidade de valores do vetor: ");
  scanf("%d", &n);

  for (i=0; i<n; i++)
  {
    v[i] = rand()%10;
    printf("Numero %d = %d\n", i, v[i]);
  }
  printf("\n\n");
  res = direto(v, n);
  printf("\n\n");
  res1 = inverso(v, n);

  return 0;
}
