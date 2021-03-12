#include <stdio.h>
int main(){
  int n, i;
  float n1, n2, n3, media;

  printf("Digite o numero de casos de teste: ");
  scanf("%d", &n);

  for(i=0; i<n; i++)
  {
    printf("Digite os numeros que deseja calcular a media ponderada:\n");
    scanf("%f\n%f\n%f", &n1, &n2, &n3);
    media = ((n1*2) + (n2*3) + (n3*5))/10;
    printf("Media: %.1f\n", media);
  }
}
