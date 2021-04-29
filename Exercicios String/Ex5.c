#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BUFLEN 100

 int main ()
 {
 int i;
 char str [BUFLEN];

 printf ("Digite seu nome: ");
 if (fgets (str, BUFLEN, stdin))
 for (i = 0; str [i] != '\0'; i++)
 {
     printf ("%c", str [i]);
 }
 printf("%c.", str[0]);

 for (i=0; str[i]!= '\0'; i++)
 {
   if (str[i] == ' ' && str[i+3] != ' ')
   {
     printf("%c.", str[i+1]);
   }
   if(str[i] == ' ' && str[i+3] == ' ')
   {
     printf("%c%c ", str[i+1], str[i+2]);
   }
 }
 return 0;
 }
