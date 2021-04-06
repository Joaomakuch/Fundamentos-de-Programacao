#include <stdio.h>
#include <math.h>

int bin2dec (int num)
{
  int i, dec = 0;
  for(i = 0; num > 0; i++)
    {
        dec = dec + pow(2, i) * (num % 10);
        num = num / 10;
    }
    return dec;
}
int dec2bin (int num)
{
   int bin[16];
   int i;
   for (i = 15; i >= 0; i--)
   {
      if (num % 2 == 0)
         bin[i] = 0;
      else
         bin[i] = 1;
      num = num / 2;
   }
  for (i = 0; i <= 15; i++) {
       printf("%d", bin[i]);
  }
  return bin[i];
}

int main()
{
  int resultado, opcao, num;

  printf("Binario para decimal = 1 \nDecimal para binario = 2 \nDigite a opcao: ");
  scanf("%d", &opcao);

  if (opcao == 1)
  {
    printf("Digite o valor: ");
    scanf("%d", &num);
    resultado = bin2dec (num);
    printf("%d", resultado);
  }
  else if (opcao == 2)
  {
    printf("Digite o valor: ");
    scanf("%d", &num);
    resultado = dec2bin(num);
  }
  return 0;
}
