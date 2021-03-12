#include <stdio.h>
int main(){
  int n, n1=2002;

  printf("Digite a senha: ");
  scanf("%d", &n);

  while (n!=n1)
  {
  printf ("Senha incorreta\nPor favor digite a senha novamente: ");
  scanf("%d", &n);
  }

    printf("Acesso permitido");

  return 0;


}
