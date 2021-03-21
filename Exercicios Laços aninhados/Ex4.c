#include <stdio.h>
int main(){

  int n, m, i, j;

  printf("Digite o valor de n: ");
  scanf("%d", &n);

  printf("     ");
  for (i=1; i<=n; i++)
  {
    printf("%5d", i);
  }
  for (i=1; i<=n; i++)
  {
    printf("\n%5d", i);

  for (j=1; j <= i; j++)
  printf("%5d", i*j);
  }
  return 0;
}
