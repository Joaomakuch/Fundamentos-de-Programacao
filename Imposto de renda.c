#include <stdio.h>
int main(){
  float salario, imposto;
  int mes;

  printf("Digite o valor do seu salário: ");
  scanf("%f", &salario);
  printf("Informe o mes: ");
  scanf("%d", &mes);

  if (mes < 4)
  {
    if (salario < 1499.15)

    printf("Isento de imposto");

    else if (salario > 1499.16 && salario <= 2246.75)

    imposto = (salario - 1499.16) * 0.075;

    else if (salario > 2246.75 && salario <= 2995.70)

    imposto = ((2246.75 - 1499.16) * 0.075) + ((salario - 2246.76) * 0.15);

    else if (salario > 2995.70 && salario <= 3743.19)

    imposto = ((2995.70 - 2246.75) * 0.15) + ((2246.75 - 1499.16) * 0.075) + ((salario - 2995.70) * 0.225);

    else

    imposto = ((3743.19 - 2995.70) * 0.225) + ((2995.70 - 2246.75) * 0.15) + ((2246.75 - 1499.16) * 0.075) + ((salario - 3743.19) * 0.275);

  }
  else
  {
    if (salario < 1566.61)

    printf("Isento de imposto");

    else if (salario > 1566.61 && salario <= 2347.85)

    imposto = (salario - 1566.61) * 0.075;

    else if (salario > 2347.85 && salario <= 3130.51)

    imposto = ((2347.85 - 1566.61) * 0.075) + ((salario - 2347.85) * 0.15);

    else if (salario > 3130.51 && salario <= 3911.63)

    imposto = ((3130.51 - 2347.86) * 0.15) + ((2347.85 - 1566.62) * 0.075) + ((salario - 3130.51) * 0.225);

    else

    imposto = ((3911.63 - 3130.52) * 0.225) + ((3130.51 - 2347.86) * 0.15) + ((2347.85 - 1566.62) * 0.075) + ((salario - 3911.63) * 0.275);
  }

  printf("O valor do imposto eh: %.2f reais", imposto);

  return 0;

}
