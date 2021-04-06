#include <stdio.h>
float calculaIMC(float altura, float peso)
{
  float imc;
  imc = peso/(altura*altura);
  return imc;
}

int main()
{
  float resultado, peso, altura;

  printf("Informe a altura: ");
  scanf("%f", &altura);
  printf("Informe o peso: ");
  scanf("%f", &peso);

  resultado = calculaIMC (altura, peso);
  printf("IMC = %.2f", resultado);
  return 0;
}
