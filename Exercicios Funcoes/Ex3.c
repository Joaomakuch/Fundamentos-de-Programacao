#include <stdio.h>

int testaTipoChar (char c)
{
  return c;
}

int main()
{
  char resultado, c;

  printf("Informe a letra: ");
  scanf(" %c", &c);

  resultado = testaTipoChar (c);

  if (resultado >= 65 && resultado <=90)
  {
    printf("1");
  }
  else if (resultado >= 97 && resultado <=122)
  {
    printf("2");
  }
  else if (resultado >= 48 && resultado <= 57)
  {
    printf("3");
  }
  else
  {
  printf("0");
  }
  return 0;
}
