#include <stdio.h>
int main(){
  int n, c, soma = 1, seq=1;

  printf("Digite o valor de n: ");
  scanf("%d", &n);

  while(soma<n)
  {
    soma = 1;
    for (c = seq; c<seq+3; c++)
    {
      soma = soma*c;
      printf("*%d", c);
    }
    seq = c;
    printf(" = %d\n", soma);
  }
  if (soma == n)
  {
    printf("\nEh triangular");
  }
  else
  {
    printf("\nNao eh triangular");
  }
  return 0;

}
