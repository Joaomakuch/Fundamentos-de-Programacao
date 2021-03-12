#include <stdio.h>
int main(){
  int i, n1, n2, aux, aux1;

  for (i=1000; i<= 9999; i++)
  {
    n1 = i%100;
    n2 = i/100;

    aux = n1 + n2;
    aux1 = aux*aux;

    if (i==aux1)
    {
      printf("%d\n", aux1);
    }
  }
  return 0;

}
