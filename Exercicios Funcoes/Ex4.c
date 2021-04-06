#include <stdio.h>

int calculaDigitoVerificador(int num)
{
  return (((num/100)*1 + ((num%100)/10)*2 + ((num%100)%10)*3)%11)%10;
}

int main()
{
  int resultado, num;

  printf("Digite um numero de tres digitos: ");
  scanf("%d", &num);

  resultado = calculaDigitoVerificador(num);

  printf("Digito verificador: %d", resultado);
  return 0;
}
