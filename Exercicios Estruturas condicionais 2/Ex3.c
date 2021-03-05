#include <stdio.h>
int main()
{
  int n, n1, n2, n3, aux;

  printf("Digite um numero entre 100 e 999: ");
  scanf("%d", &n);

   if(n < 100 || n > 999)
   {
     printf("Numero invalido");
   }
   else
  {
       n1 = n % 10;
       n2 = (n / 10) % 10;
       n3 = (n / 100) % 10;

       aux = (n1*n1*n1) + (n2*n2*n2) + (n3*n3*n3);

       if (aux == n)
    {
          printf("O numero %d eh um numero de angstron", n);
    }
    else
    {
      printf("O numero %d nao eh um numero de angstron", n);
    }
  }
  return 0;
}
