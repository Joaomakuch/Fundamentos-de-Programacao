#include <stdio.h>
#include<stdlib.h>
#include <time.h>
void valor(int valor);

int main(){
  int i, valor, n;
  srand(time(NULL));
  valor = rand()%501;

 printf("Um Numero foi sorteado\n");
 printf("Tente acertar o numero entre 1 e 500: ");
 scanf("%d", &n);


 for (i=1; n!=valor; i++)
 {

 if (n < valor)
 {
  printf("O numero sorteado eh maior\nTente novamente: ");
   scanf("%d", &n);
 }

 if (n > valor)
 {
   printf("O numero sorteado eh menor\nTente novamente: ");
   scanf("%d", &n);
 }
 }
 printf("Parabens, voce acertou o valor sorteado em %d tentativas!!", i);

 return 0;
}
