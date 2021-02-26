#include <stdio.h>
#include <stdlib.h>
int main(){
  int a, b, c, maiorAB, maior;

  printf("Infome tres valores:\n");
  scanf("%d%d%d", &a, &b, &c);

  maiorAB = (a + b + abs(a - b))/2;
  maior = (maiorAB + c + abs(maiorAB - c))/2;

  printf("O maior valor eh: %d", maior);
  return 0;


}
