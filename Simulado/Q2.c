#include <stdio.h>
int main(){
  int opiniao;
  int numero, idade, n=0, soma = 0, i=1;

  while(n!=-1)
  {
    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Qual sua opiniao em relacao ao filme?\nOtimo = 1\nBom = 2\nRegular = 3\nRuim = 4\nPessimo = 5\nInforme sua opiniao:\n ");
    scanf(" %d", &opiniao);

    if (opiniao == 1)
    {
      if (idade < 18)
      {
        numero = 5;
      }
      else if (idade >= 18 && idade <= 40)
      {
        numero = 10;
      }
      else
      {
        numero = 15;
      }
    }
    if (opiniao == 2)
    {
      if (idade < 18)
      {
        numero = 4;
      }
      else if (idade >= 18 && idade <= 40)
      {
        numero = 7;
      }
      else
      {
        numero = 12;
      }
    }
    if (opiniao == 3)
    {
      if (idade < 18)
      {
        numero = 3;
      }
      else if (idade >= 18 && idade <= 40)
      {
        numero = 5;
      }
      else
      {
        numero = 8;
      }
    }
    if (opiniao == 4)
    {
      if (idade < 18)
      {
        numero = 2;
      }
      else if (idade >= 18 && idade <= 40)
      {
        numero = 3;
      }
      else
      {
        numero = 5;
      }
    }
    if (opiniao == 5)
    {
      numero = 0;
    }
   soma = soma + numero;

   printf("\nDeseja continuar?\nDigite -1 para sair ou qualquer outro numero para continuar: ");
   scanf("%d", &n);

   i++;
  }

  printf("Pontuacao = %d", soma);

  return 0;
}
