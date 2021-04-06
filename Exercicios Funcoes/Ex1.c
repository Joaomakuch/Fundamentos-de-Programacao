#include <stdio.h>

int ehBissexto (int ano)
{
  int valor;

   return ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0);

}

int main()
{
  int resposta, ano;

  printf("Informe o ano: ");
  scanf("%d", &ano);

  resposta = ehBissexto(ano);

  if (resposta == 1)
  {
    printf("1");
  }
  else
  {
    printf("0");
  }
  return 0;
}
