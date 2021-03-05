#include <stdio.h>
int main(){
  int ano;

  printf("Informe o ano: ");
  scanf("%d", &ano);

  if (!(ano%400) || (!(ano%4)&&(ano%100)))
  printf("O ano eh bissexto");
  else
  printf("O ano nao eh bissexto");
  return 0;
}
