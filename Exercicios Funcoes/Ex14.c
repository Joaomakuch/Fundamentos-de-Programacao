#include <stdio.h>
int ehRegular (int n)
{
  while ((n%2) == 0)
  {
    n = n/2;
  }
  while ((n%3) == 0)
  {
    n = n/3;
  }
  while ((n%5) == 0)
  {
    n = n/5;
  }
  if (n==1)
  {
    return 1;
  }
  else

  return 0;
}

int main()
{
  int x;

  printf("Digite um numero: ");
  scanf("%d", &x);

  if (ehRegular(x) == 1)
  {
    printf("Eh regular");
  }
  else
  {
    printf("Nao eh regular");
  }
  return 0;
}
