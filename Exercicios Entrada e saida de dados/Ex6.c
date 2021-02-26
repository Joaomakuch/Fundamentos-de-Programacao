#include <stdio.h>
int main(){
  int n1, n2;
  float media;

  printf("Digite o primeiro numero: ");
  scanf("%d", &n1);
  printf("Digite o segundo numero: ");
  scanf("%d", &n2);

  media = (n1 + n2)/2;

  printf("A media dos valores eh: %.1f", media);
  /* Para n1=2 e n2=4 a media é 3.0
     Para n1=2 e n2=3 a media informada é 2.0
 */
  return 0;
}
