#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 10

typedef struct {
char inicial[tam];
int mes;
int dia;
}Registro;

int main()
{
  Registro vet[tam];
  int i, j;

  for (i=0; i<5; i++)
  {
    printf("Informe a inicial: ");
    scanf(" %s", vet[i].inicial);

    //printf("Informe o dia do aniversario: ");
    //scanf("%d", &vet[i].dia);

    printf("Informe o mes do aniversario: ");
    scanf("%d", &vet[i].mes);
  }
  for (i=0; i<12; i++)
  {
    printf("\nmes %d: ", i);
    for(j=0; j<5; j++)
    {
      if (vet[j].mes == i)
      {
        printf("%s ", vet[j].inicial);
      }
    }
  }
  return 0;
}
