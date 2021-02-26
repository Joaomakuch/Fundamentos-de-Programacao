#include <stdio.h>
int main(){
  int segundos;
  printf("Digite o valor dos segundos: ");
  scanf("%d", &segundos);

  printf("Dias:%d\n", segundos / (60*60*24));
  printf("Horas:%d\n", segundos % (60*60*24)/(60*60));
  printf("Minutos:%d\n", segundos % (60*60*24) % (60*60)/60);
  printf("Segundos:%d\n", segundos % (60*60*24) % (60*60) % 60);

  return 0;
}
