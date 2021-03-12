#include <stdio.h>
int main(){
  int n, i, fib1 = 0, fib2 = 1, soma, aux;

  printf("Digite quantos numeros deseja na sequencia de fibonacci:  ");
  scanf("%d", &n);

  printf("0 1 ");

  for (i=0; i<n-2; i++)
  {
    soma = fib1 + fib2;
    aux = fib1;
    fib1 = fib2;
    fib2= soma;

    printf("%d ", soma);
  }
  return 0;

}
