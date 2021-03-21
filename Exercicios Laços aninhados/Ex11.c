#include <stdio.h>
int main()
{
    int n, k, primo = 1, i, div, j = 1, flag = 1;

    printf("Digite o numero: ");
    scanf("%d", &k);
    printf("Deseja apresentar quantos numeros primos do numero informado: ");
    scanf("%d", &n);

    printf ("1");

        for (i=1; i<k; i++)
        {
            for (div = 2; div<i; div++)
            {
                if (i%div == 0)
                {
                    primo = 0;
                }
            }
            if (i == 1)
            {
                primo = 0;
            }
            if (primo == 1)
            {
                if (flag < n)
                    flag = flag + 1;
                else
                    return 0;
                printf(" %d", i);
            }
            primo = 1;
        }
    return 0;
}
