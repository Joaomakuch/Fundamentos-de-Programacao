#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
  double x, y;
  printf("Digite o valor de X: ");
  scanf("%lf", &x);
  printf("Digite o valor de Y: ");
  scanf("%lf", &y);

  if (x == 0 && y == 0)

  printf("A coordenada esta na origem");

  else if (x > 0 && y > 0)

  printf("A coordenada esta no primeiro quadrante (Q1)");

  else if (x > 0 && y < 0)

  printf("A coordenada esta no quarto quadrante (Q4)");

  else if (x < 0 && y > 0)

  printf("A coordenada esta no segundo quadrante (Q2)");

  else if (x < 0 && y < 0)

  printf ("A coordenada esta no terceiro quadrante (Q3)");

  else if (x > 0 && y == 0)

  printf("A coordenada esta no eixo X");

  else if (x < 0 && y == 0)

  printf("A coordenada esta no eixo X");

  else if(x == 0 && y > 0)

  printf("A coordenada esta no eixo Y");

  else if(x == 0 && y < 0)

  printf("A coordenada esta no eixo Y");

  else

  printf("A coordenada nao existe");

  return 0;

}
