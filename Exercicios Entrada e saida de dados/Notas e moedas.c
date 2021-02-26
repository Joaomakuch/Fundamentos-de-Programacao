#include <stdio.h>
int main (){
  double valor;
  int notas, moedas;
  printf("Informe o valor: ");
  scanf("%lf", &valor);

  notas=valor*100;
  moedas=notas%100;
  notas=notas/100;

  printf("Notas: \n");
  printf("%d nota(s) de R$ 100.00\n", notas/100);
  printf("%d nota(s) de R$ 50.00\n", (notas%100)/50);
  printf("%d nota(s) de R$ 20.00\n", ((notas%100)%50)/20);
  printf("%d nota(s) de R$ 10.00\n", (((notas%100)%50)%20)/10);
  printf("%d nota(s) de R$ 5.00\n", ((((notas%100)%50)%20)%10)/5);
  printf("%d nota(s) de R$ 2.00\n", (((((notas%100)%50)%20)%10)%5)/2);

  printf("Moedas: \n");
  printf("%d moeda(s) de R$ 1.00\n", (((((notas%100)%50)%20)%10)%5)%2);
  printf("%d moeda(s) de R$ 0.50\n", moedas/50);
  printf("%d moeda(s) de R$ 0.25\n", (moedas%50)/25);
  printf("%d moeda(s) de R$ 0.10\n", ((moedas%50)%25)/10);
  printf("%d moeda(s) de R$ 0.05\n", (((moedas%50)%25)%10)/5);
  printf("%d moeda(s) de R$ 0.01\n", (((moedas%50)%25)%10)%5);

  return 0;

}
