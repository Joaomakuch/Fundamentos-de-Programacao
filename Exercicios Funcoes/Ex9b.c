#include <stdio.h>
void imprimeMsgIMC(float imc)
{
  if (imc < 18.5)
  {
    printf("Voce esta abaixo do peso");
  }
  else if (imc >= 18.5 && imc < 25)
  {
    printf("Voce esta com o peso normal");
  }
  else if (imc >= 25 && imc < 30)
  {
    printf("Voce esta acima do peso");
  }
  else
  {
    printf("Voce esta obeso");
  }
}

int main()
{
  float altura, peso, imc;

  printf("Informe a altura: ");
  scanf("%f", &altura);
  printf("Informe o peso: ");
  scanf("%f", &peso);

  imc = peso/(altura*altura);

  printf("IMC = %.2f\n", imc);
  imprimeMsgIMC(imc);
  return 0;
}
