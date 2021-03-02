#include <stdio.h>
int main(){
  int d1, m1, a1, d2, m2, a2, dia, mes, ano, diferenca;

  printf("Digite a data atual [dd mm aaaa]: ");
  scanf("%d%d%d", &d1, &m1, &a1);

  printf("Digite a data do seu nascimento [dd mm aaaa]: ");
  scanf("%d%d%d", &d2, &m2, &a2);

  diferenca = 365*a1+30*m1+d1 - 365*a2-30*m2-d2;
  ano = diferenca/365;
  diferenca = diferenca%365;
  mes = diferenca/30;
  diferenca = diferenca%30;
  dia = diferenca;

  printf("Voce tem %d ano(s), %d mes(es) e %d dia(s) de vida", ano, mes, dia);
  return 0;

}
