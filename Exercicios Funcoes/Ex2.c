#include <stdio.h>

int arredonda(float x)
{
  if (x>0)
  {
    return x + 0.5;
  }
  else
  {
    return x - 0.5;
  }
}

int main()
{
  int resultado;
  float x;

  printf("Digite o valor: ");
  scanf("%f", &x);

  resultado = arredonda(x);

  printf("O numero arredondado eh %d", resultado);
  return 0;
}
