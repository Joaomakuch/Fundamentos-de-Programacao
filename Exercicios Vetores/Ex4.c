#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 10
#define m 10

int main()
{
 int num[n], num1[n], i, j = m, soma;
 srand(time(NULL));

 for (i=0; i<10; i++)
 {
   num[i] = rand()%10;
   num1[i] = rand()%10;
 }

 for (i=0; i<10; i++)
 {
   printf("\nNumero (a) %d = %d", i, num[i]);
   printf("\nNumero (b) %d = %d", i, num1[i]);
 }

 printf("\n\n\n");

 for (i=0; i<n; i++)
 {
   soma = num[i] + num1[j-1];
   printf("Numero (a) %d + Numero (b) %d = %d\n", i, j-1, soma);
   j--;
 }


 return 0;
}
