#include <stdio.h>
int main ( )
{
int n1 , n2 , n3 , aux ;

printf("Digite n1, n2 e n3: ");
scanf("%d%d%d", &n1, &n2, &n3);
if ( n2 >= n3 )
{
aux = n2 ;
n2 = n3 ;
n3 = aux ;
}
if ( n1 >= n2 )
{
aux = n1 ;
n1 = n2 ;
n2 = aux ;
if ( n2 >= n3 )
{
aux = n2 ;
n2 = n3 ;
n3 = aux ;
}
}
printf("%d %d %d\n" , n1 , n2 , n3 ) ;
return ( 0 ) ;
}
//Qual sera a saıda se atribuirmos no inıcio os valores 1, 2 e 3 a n1, n2 e n3, respectivamente? O resultado vai ser 1, 2 e 3
//Qual sera a saida se atribuirmos no inicio os valores 20, 10 e 30 a n1, n2 e n3, respectivamente? O resultado vai ser 10, 20 e 30
// Qual sera a saıda se atribuirmos no inıcio os valores 5*5, n1/2 e n2+1 a n1, n2 e n3, respectivamente? A saída será 12, 13 e 25
// O que o programa faz, exatamente? Explique o funcionamento do algoritmo. O programa troca os valores de acordo com suas atribuições, ou seja, ele depende da regra que está estabelecida nos laços
