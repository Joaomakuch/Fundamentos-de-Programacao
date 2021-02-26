#include <stdio.h>

int main()
{
  char letra;
  printf("Digite a letra que será convertida de maiuscula para minuscula: \n");
  scanf("%c", &letra);

  if (letra >= 65 && letra <=90)
  {
    letra = letra+32;
    printf("\n\n Letra convertida: %c", letra);

  }
  else{
    printf("\n\n Letra invalida");
  }
  return 0;
}
