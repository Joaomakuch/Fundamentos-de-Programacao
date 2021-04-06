#include <stdio.h>
int verificaUltimosDigitos(int a,int b)
{
  while(b>0)
  {
    if(a%10!=b%10)
      return 0;

    b=b/10;
    a=a/10;
  }

  return 1;
}

int ehSegmento(int a,int b)
{
  if(a>b)
  {
    while(a>0)
    {
      if(verificaUltimosDigitos(a,b))
        return 2;

      a=a/10;
    }
  }
  else
  {
    while(b>0)
    {
      if(verificaUltimosDigitos(b,a))
        return 1;

      b=b/10;
    }
  }

  return 0;
}

int main()
{
  int n1, n2;

  printf("Informe a: ");
  scanf("%d", &n1);
  printf("Informe b: ");
  scanf("%d", &n2);

  printf("%d",ehSegmento(n1, n2));

  return 0;
}
