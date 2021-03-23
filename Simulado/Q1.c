#include <stdio.h>
int main(){
  int n, nseq, i, aux=0, k=0;

  printf("Informe quantos numeros deseja inserir: ");
  scanf("%d", &nseq);

  for (i=1; i<=nseq; i++)
  {
    printf("Digite o %dº numero: ", i);
    scanf("%d", &n);

    if (n != aux)
    {
      k = k+1;
    }
    aux = n;
  }

  printf("Quantidade de segmentos: %d", k);
  return 0;
}
