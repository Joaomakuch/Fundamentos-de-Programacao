#include <stdio.h>
int main(){
  int n, fat;

  printf("Insira  numero que deseja calular o fatorial: ");
  scanf("%d", &n);

  for (fat=1; n>1; n= n-1)
  fat = fat*n;

  printf("Valor do fatorial: %d", fat);
  return 0;
}
