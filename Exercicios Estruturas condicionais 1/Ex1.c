#include <stdio.h>
int main(){
  int alunos, monitores, aux;
  printf("Digite a quantidade de alunos: ");
  scanf("%d", &alunos);
  printf("Digite a quantidade de monitores: ");
  scanf("%d", &monitores);

  aux = alunos + monitores;

  if (aux<=50)
  {
    printf("Eh possivel levar todos em apenas uma viagem");
  }
  else
  {
   printf("Nao eh possivel levar todos em apenas uma viagem");
  }
  return 0;
}
