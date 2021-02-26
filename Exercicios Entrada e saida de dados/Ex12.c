#include <stdio.h>
#include <stdlib.h>
int main(){
  int a, b, c, menorAB, menor;

  printf("Infome tres valores:\n");
  scanf("%d%d%d", &a, &b, &c);

  menorAB = (a + b - abs(a - b))/2;
  menor = (menorAB + c - abs(menorAB - c))/2;

  printf("O menor valor eh: %d", menor);
  return 0;


}
