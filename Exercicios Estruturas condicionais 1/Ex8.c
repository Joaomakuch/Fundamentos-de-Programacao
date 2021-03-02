#include <stdio.h>
int main(){
  int d1, m1, a1, d2, m2, a2, dia, mes, ano, diferenca;
  float h;

  /* sabado = 0
     domingo = 1
     segunda feira = 2
     terça feira = 3
     quarta feira = 4
     quinta feira = 5
     sexta feira = 6
     */

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

  h = (d2 + (((m2 + 1) * 26)/10) + (a2%100) + ((a2%100)/4) + ((a2/100)/4) - ((a2/100)*2)) % 7;

  printf("Voce tem %d ano(s), %d mes(es) e %d dia(s) de vida\n", ano, mes, dia);
  printf("Nasceu no dia %.0f da semana", h);
  return 0;


}
