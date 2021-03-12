#include <stdio.h>
int main(){
  int pa, pb, casos, anos, i;
  float ga, gb;

  printf("Informe o numero de casos: ");
  scanf("%d", &casos);

  for (i=0; i<casos; i++)
  {
    printf("Informe a população da cidade A: ");
  scanf("%d", &pa);
  printf("Informe a população da cidade B: ");
  scanf("%d", &pb);
  printf("Informe o crescimento populacional de A: ");
  scanf("%f", &ga);
  printf("Informe o crescimento populacional de B: ");
  scanf("%f", &gb);

 anos=0;
  while(pa <= pb && anos <=100)
  {
    pa=pa*(1+ga/100);
    pb=pb*(1+gb/100);
    anos+=1;
  }

  if (anos>=100)
  printf("Mais de um século\n");
  else
  printf("%d anos\n", anos);
  }
  return 0;

}
