#include <stdio.h>
int main(){
  float a, b, c;

  printf("Informe 3 valores:\n");
  scanf("%f\n%f\n%f", &a, &b, &c);

  if (a==0 || b==0 || c==0)
  {
    printf("Nao eh um triangulo");
  }
  else
  {
    if (a==b && b==c)
    printf("O triangulo eh equilatero");
    else if (a==b && b!=c)
    printf("O triangulo eh isosceles");
    else if (a==c && c!=b)
    printf("O triangulo eh isosceles");
    else if (b==c && c!=a)
    printf("O triangulo eh isosceles");
    else
    printf("O triangulo eh escaleno");
  }
  return 0;


}
