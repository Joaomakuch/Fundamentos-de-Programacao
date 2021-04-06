#include <stdio.h>

int retornaMaior(int n1, int n2)
{
  int valor;

  if (n1>n2)
  {
    valor = n1;
    return valor;
  }
  else
  valor = n2;
  return valor;
}

int main()
{
  int n1, n2, resultado;

  printf("Digite o primeiro numero: ");
  scanf("%d", &n1);
  printf("Digite o segundo numero: ");
  scanf("%d", &n2);

  resultado = retornaMaior(n1, n2);

  printf("Maior valor: %d", resultado);
  return 0;
}
