#include <stdio.h>
int main(){
  double funcao, j;
  int i,n;

  scanf("%d", &n);

  for (i = n-(n*2); i<=n; i++)
  {
    printf("\n%d", i);
    int x = i;
    funcao = (x*x) + x + 1;

    for (j=1; j<=funcao; j++)
    {
      printf(".");
      if (j==funcao)
      printf("*");
    }
  }
  return 0;
}
