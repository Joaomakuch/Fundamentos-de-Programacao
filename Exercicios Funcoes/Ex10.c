#include <stdio.h>
int retornaMDC(int num1, int num2)
{
  int n1 = 1, n2 = 0, aux, i;
  while (n1 != n2)
  {
    if (num1 > num2)
    {
      n1 = num1 - num2;
      num1 = n1;
    }
    if (num2 > num1)
    {
      n2 = num2 - num1;
      num2 = n2;
    }
  }
  aux  = num1;
  return aux;
}

int main()
{
  int num1, num2, resultado;

  printf("Informe o primeiro valor: ");
  scanf("%d", &num1);
  printf("Informe o segundo valor: ");
  scanf("%d", &num2);

  resultado = retornaMDC(num1, num2);
  printf("MDC = %d", resultado);
  return 0;
}
