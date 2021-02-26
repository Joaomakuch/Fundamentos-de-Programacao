#include <stdio.h>
int main(){
  char inicial;
  int idade;
  float altura;

  printf("Digite sua inicial: ");
  scanf("%c", &inicial);
  printf("Digite sua idade: ");
  scanf("%d", &idade);
  printf("Digite sua altura: ");
  scanf("%f", &altura);

  printf("Sua inicial eh %c, voce tem %d anos e possui %.2f de altura", inicial, idade, altura);
  return 0;


}
