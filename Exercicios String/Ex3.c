#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BUFLEN 100

 int main ()
 {
 int i, j, n=0, cont=0;
 char str [BUFLEN];
 char str1 [BUFLEN];
 char str2 [BUFLEN];

 printf ("Digite uma string: ");
 if (fgets (str, BUFLEN, stdin))
 for (i = 0; str [i] != '\0'; i++)
 {
     printf ("%c", str [i]);
     cont++;
 }

 printf ("Digite outra string: ");
 if (fgets (str1, BUFLEN, stdin))
 for (i = 0; str1 [i] != '\0'; i++)
 {
     printf ("%c", str1 [i]);
 }

 printf("String intercalada: ");

 for (i = 0; str [i] != '\0'; i++)
 {
      printf("%c", str [i]);
      if (str[cont-1] == '\n')
        str[cont-1] = ' ';
      if (str [i] == ' ')
      {
        for (j = n; str1 [j] != '\0'; j++)
        {
          printf("%c", str1 [j]);
          n++;
          if (str1 [j] == ' ')
          {
            break;
          }
        }
      }

 }
 return (0);
 }


