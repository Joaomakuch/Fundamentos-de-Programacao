#include <stdio.h>
int main(){
  int i, j, n, m;

  printf("Digite os valores de m e n:\n");
  scanf("%d\n%d", &m, &n);

  for (i=1; i<=n; i++)
  {
    printf("%d ", i);
    for (j=1; j<=m; j++)
    {
      if (j>1)
      {
      printf("%d ", i*j);
      }
    }
    printf("\n");
  }
  return 0;
}
