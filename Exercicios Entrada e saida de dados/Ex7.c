#include <stdio.h>
 int main () {
 int aux;
 printf ("Digite um numero inteiro: ");
 scanf("%d", &aux );
 printf("%d", aux);

 /*
   1. A corre��o necessaria foi trocar o %f por %d no printf, j� que informamos que
   o valor aux vai ser inteiro, e n�o flutuante
   */
 return 0;
 }
