#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 15

typedef struct {
int codigo;
unsigned int telefone;
int preco;
}Registro;

int main()
{
  Registro vet[tam];
  int i, media=0;
  srand(time(NULL));

  for (i=0; i<15; i++)
  {
    vet[i].codigo = rand()%1000;
    vet[i].telefone = 10000001+rand()%10000000;
    vet[i].preco = rand()%1000;

    media = media + vet[i].preco;
  }
  media = media/15;
  printf("Media: %d", media);

  for (i = 0; i<15; i++)
  {
    if (vet[i].preco < media)
    {
      printf("\nLoja com preco abaixo da media\nCodigo: %d\nTelefone: %d\nPreco: %d", vet[i].codigo, vet[i].telefone, vet[i].preco);
    }
  }
  return 0;
}
