#include <stdio.h>
int main(){
  int anos;
  float a1, a2, c1, c2;

  printf("Informe a altura de Chico: ");
  scanf("%f", &a1);
  printf("Informe a altura de Ze: ");
  scanf("%f", &a2);
  printf("Informe o crescimento por ano de Chico em cm: ");
  scanf("%f", &c1);
  printf("Informe o crescimento por ano de Ze em cm: ");
  scanf("%f", &c2);

 anos=0;
  while(a1 >= a2)
  {
    a1=a1+(c1/100);
    a2=a2+(c2/100);
    anos+=1;
  }

 printf("Serao necessarios %d anos para que Ze seja maior que chico", anos);
  return 0;

}
