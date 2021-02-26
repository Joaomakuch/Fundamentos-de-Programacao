#include <stdio.h>

int main()
{
    int i1, i2, divis, rest;

    printf("Digite o primeiro valor: ");
    scanf("%d", &i1);
    printf("Digite o segundo valor: ");
    scanf("%d", &i2);

    divis = i1/i2;
    rest = i1 % i2;

    printf("O resultado da divisão eh %d com resto %d", divis, rest);
    /* Sendo i1=10 e i2=5 o resultado é 2 com resto 0
       Sendo i1=12 e i2=5 o resultado é 2 com resto 2
       */
    return 0;
}
