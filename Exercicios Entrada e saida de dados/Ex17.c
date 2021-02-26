#include <stdio.h>
int main(){
  float temp, aux;
  printf("Digite a temperatura em Celsius (C): ");
  scanf("%f",&temp);

  aux = (temp * 9 + 160)/5;
  printf("A temperatura em Farenheit (F) eh:%.1f ", aux);
  return 0;
}
