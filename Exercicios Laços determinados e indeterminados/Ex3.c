#include <stdio.h>
int main(){
  int i, n1, n2, aux, count=0;

  printf("Digite o primeiro valor: ");
  scanf("%d", &n1);
  printf("Digite o segundo valor: ");
  scanf("%d", &n2);

  if (n1>n2)
  {
    aux = n1 - n2;
  }
  else if (n1<n2)
  {
    aux = n2 - n1;
  }
  if (aux!=0)
  {
    for(i=0; i<aux; i++)
    {
      if(i % 2 == 1)
      count++;
    }
    printf("Existem %d numeros impares entre %d e %d", count, n1, n2);
  }
  else
  {
    printf("Nao existem numeros impares entre os valores");
  }
  return 0;
}
