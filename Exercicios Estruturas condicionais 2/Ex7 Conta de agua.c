#include <stdio.h>
int main (){
  float consumo, saida;

  printf("Informe o consumo em m³: ");
  scanf("%f", &consumo);

  if (consumo <=10)
  {
    printf("Valor da fatura: 7 reais");
  }
  else if (consumo >= 11 && consumo <= 30)
  {
    saida = 7 + (1*(consumo - 10));
    printf("Valor da fatura: %.2f reais", saida);
  }
  else if (consumo >= 31 && consumo <= 100)
  {
    saida = 7 + 20 + (2*(consumo - 30));
    printf("Valor da fatura: %.2f reais", saida);
  }
  else if (consumo >= 101)
  {
    saida = 7 + 20 + 140 + (5*(consumo - 100));
    printf("Valor da fatura : %.2f reais", saida);
  }
  return 0;

}
