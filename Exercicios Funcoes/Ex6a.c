#include <stdio.h>
int retornaResto(int alexandre, int maria, int rafael)
{
  int resultado;
  resultado = (alexandre + maria + rafael)%3;
  return resultado;
}

int main()
{
  int n1, n2, n3, resultado, r1, r2, r3;

  printf("Informe quanto Alexandre joga e o resto desejado: ");
  scanf("%d %d", &n1, &r1);
  printf("Informe quanto Maria joga e o resto desejado: ");
  scanf("%d %d", &n2, &r2);
  printf("Informe quanto Rafael joga e o resto desejado: ");
  scanf("%d %d", &n3, &r3);

  resultado = retornaResto(n1, n2, n3);

  if (resultado == r1)
  {
    printf("Alexandre ganhou");
  }
  if (resultado == r2)
  {
    printf("Maria ganhou");
  }
  if (resultado == r3)
  {
    printf("Rafael ganhou");
  }
  return 0;
}
