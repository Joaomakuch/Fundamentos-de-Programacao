#include <stdio.h>
 int main () {
 int aux;
 printf ("Digite um numero inteiro: ");
 scanf("%d", &aux );
 printf("%d", aux);

 /*
   1. A correção necessaria foi trocar o %f por %d no printf, já que informamos que
   o valor aux vai ser inteiro, e não flutuante
   */
 return 0;
 }
