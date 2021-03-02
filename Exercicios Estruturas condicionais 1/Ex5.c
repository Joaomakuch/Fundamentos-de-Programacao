#include <stdio.h>
#include <math.h>
int main (){
  float a, b, c, r1, r2;
  printf("Digite o primeiro valor: ");
  scanf("%f", &a);
  printf("Digite o segundo valor: ");
  scanf("%f", &b);
  printf("Digite o terceiro valor: ");
  scanf("%f", &c);

  r1 = (-b + (sqrt((b*b - 4*a*c)))) / (2*a);
  r2 = (-b - (sqrt((b*b - 4*a*c)))) / (2*a);

  printf("Primeira raiz: %f\nSegunda raiz: %f", r1,r2);
  return 0;
}
