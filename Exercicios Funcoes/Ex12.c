#include <stdio.h>
void verificaDig (int a, int b)
{
  if (b==a || b==a%1000000 || b==a%100000 || b==a%10000 || b==a%1000 || b==a%100)
  {
    printf("1");
  }
  else
  {
    printf("0");
  }
}
int main ()
{
  int a, b;

  printf("Informe o valor de A: ");
  scanf("%d", &a);
  printf("Informe o valor de b: ");
  scanf("%d", &b);

  verificaDig (a, b);
  return 0;
}
