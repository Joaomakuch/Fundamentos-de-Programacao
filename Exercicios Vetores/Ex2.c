#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 10

int main()
{
 int num[n], i, soma,x;
 srand(time(NULL));

 for (i=0; i<10; i++)
 {
   num[i] = rand()%10;
 }

 for (i=0; i<10; i++)
 {
   printf("\nNumero %d = %d", i, num[i]);
 }

 printf("\n\nDeseja retirar qual posicao?\nResposta: ");
 scanf("%d", &x);

 for (i=x; i<n; i++)
 {
   num[i] = num[i+1];
 }

 for (i=0; i<n-1; i++)
 {
   printf("\nNumero %d = %d", i, num[i]);
 }
 return 0;
}
