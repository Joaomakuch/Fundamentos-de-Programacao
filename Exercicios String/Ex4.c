#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BUFLEN 100

void imprimeVogal(char str2[])
{
  int i, j=0;
  char str1 [BUFLEN];
  for (i=0; str2[i] != '\0'; i++)
  {
    if (str2[i] == 'a' || str2[i] == 'A')
     {
       str1[j] = 'A';
       j++;
     }
     if (str2[i] == 'e' || str2[i] == 'E')
     {
       str1[j] = 'E';
       j++;
     }
     if (str2[i] == 'i' || str2[i] == 'I')
     {
       str1[j] = 'I';
       j++;
     }
     if (str2[i] == 'o' || str2[i] == 'O')
     {
       str1[j] = 'O';
       j++;
     }
     if (str2[i] == 'u' || str2[i] == 'U')
     {
       str1[j] = 'U';
       j++;
     }
  }
  for (i=0; i < j; i++)
  {
    printf("%c", str1[i]);
  }
  str1[BUFLEN] = '\0';
}

 int main ()
 {
 char str [BUFLEN];
 char str1 [BUFLEN];

 printf ("Digite seu nome: ");
 if (fgets (str, BUFLEN, stdin))

 printf ("Digite seu bairro: ");
 if (fgets (str1, BUFLEN, stdin))

 printf("Sua senha: ");
 imprimeVogal (str);
 imprimeVogal (str1);

 return (0);
 }
