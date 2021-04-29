#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BUFLEN 100

void imprimeVogal(int ind, char vogal)
{
  int i;
  printf("%c = ", vogal);
  for (i=0; i<ind; i++)
  {
    printf("*");
  }
  printf(" (%d)", ind);
}

 int main ()
 {
 int i, a=0, e=0, j=0, o=0, u=0;
 char str [BUFLEN];

 printf ("Digite uma string: ");
 if (fgets (str, BUFLEN, stdin))
 for (i = 0; str [i] != '\0'; i++)
 {
     printf ("%c", str [i]);

     if (str[i] == 'a' || str[i] == 'A')
     {
       a++;
     }
     if (str[i] == 'e' || str[i] == 'E')
     {
       e++;
     }
     if (str[i] == 'i' || str[i] == 'I')
     {
       j++;
     }
     if (str[i] == 'o' || str[i] == 'O')
     {
       o++;
     }
     if (str[i] == 'u' || str[i] == 'U')
     {
       u++;
     }
 }

 imprimeVogal(a, 65);
 printf("\n");
 imprimeVogal(e, 69);
 printf("\n");
 imprimeVogal(j, 73);
 printf("\n");
 imprimeVogal(o, 79);
 printf("\n");
 imprimeVogal(u, 85);
 printf("\n");

 return (0);
 }


