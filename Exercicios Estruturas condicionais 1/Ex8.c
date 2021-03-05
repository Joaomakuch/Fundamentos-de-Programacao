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

  printf("Digite a data atual [dd/mm/aaaa]: ");
  scanf("%d/%d/%d", &d1, &m1, &a1);

  printf("Digite a data do seu nascimento [dd/mm/aaaa]: ");
  scanf("%d/%d/%d", &d2, &m2, &a2);

  diferenca = 365*a1+30*m1+d1 - 365*a2-30*m2-d2;
  ano = diferenca/365;
  diferenca = diferenca%365;
  mes = diferenca/30;
  diferenca = diferenca%30;
  dia = diferenca;

   printf("Voce tem %d ano(s), %d mes(es) e %d dia(s) de vida e ", ano, mes, dia);

  h = (d2 + (((m2 + 1) * 26)/10) + (a2%100) + ((a2%100)/4) + ((a2/100)/4) + 5*(a2/100)) % 7;

  if (h == 0)
     printf("Nasceu em um sabado");
 else if (h==1)
     printf("Nasceu em um domingo");
 else if(h==2)
     printf("Nasceu em uma segunda feira");
 else if(h==3)
     printf("Nasceu em uma terça feira");
 else if(h==4)
     printf("Nasceu em uma quarta feira");
 else if(h==5)
     printf("Nasceu em uma quinta feira");
 else if(h==6)
     printf("Nasceu em uma sexta feira");


 return 0;
}
