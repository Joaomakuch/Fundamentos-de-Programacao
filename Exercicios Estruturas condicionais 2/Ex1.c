#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
  char opcao;
  double x, y, z, saida;

  printf("Digite tres valores\n");
  scanf("%lf\n%lf\n%lf", &x, &y, &z);
  printf("Selecione uma das opcoes: \n\n");
  printf("Media aritmetrica (A)\n");
  printf("Media ponderada (B)\n");
  printf("Media geometrica (C)\n");
  printf("Media harmonica (D)\n\n");
  scanf(" %c", &opcao);

  if (opcao == 'A' || opcao == 'a')
  {
    saida = (x+y+z)/3;
    printf("Resultado: %.2lf", saida);
  }
  else if (opcao == 'B' || opcao == 'b')
  {
    saida = (x + (y*2) + (z*3))/6;
    printf("Resultado: %.2lf", saida);
  }
  else if (opcao == 'C' || opcao == 'c')
  {
    saida = sqrt(x*y*z);
    printf("Resultado: %.2lf", saida);
  }
  else if (opcao == 'D' || opcao == 'd')
  {
    saida = (3/((1/x) + (1/y) + (1/z)));
    printf("Resultado: %.2lf", saida);
  }
  return 0;

}
