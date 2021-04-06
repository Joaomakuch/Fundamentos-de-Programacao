#include <stdio.h>
void contadigitos(int n, int d)
{
  int valor=1, j, i, n1=1;
  while (valor > 0)
  {
    valor = (n %(10*n1))/(n1);

    if (valor == d)
    {
      j++;
    }
    n1=n1*10;
    i++;
  }
  printf("%d vezes o digito %d", j, d);
}

int main()
{
  int n, d;

  printf("Informe n: ");
  scanf("%d", &n);
  printf("Informe d: ");
  scanf("%d", &d);

  contadigitos(n, d);
  return 0;
}
