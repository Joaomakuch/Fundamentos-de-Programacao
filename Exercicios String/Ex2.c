#include <stdio.h>
#include <stdlib.h>
#define BUFLEN 100
void repete (char*str, char*str2){
    int i, j, cont=0 ,x ,cont1=0, flag=0, cont2=0,cont3=0;
    for(i=0;str[i]!='\0';i++)
    {
        cont++;
    }
    cont=cont-1;
    for(i=0;str2[i]!='\0';i++)
    {
        cont2++;
    }
    cont2=cont2-1;
    for(i=0;i<=cont2-cont;i++)
    {
      cont1 = 0;
        for(j=0;j<cont;j++)
        {
            if(str[j]==str2[i+j])
            {
                cont1++;
            }
        }
        if (cont1==cont)
        {
          cont3++;
        }
    }
    printf("Quantidade de vezes que repetiu a palavra na frase: %d",cont3);
}
int main(){
    int i,cont=0;
    char str [BUFLEN];
    char str2 [BUFLEN];
    printf("Insira uma palavra:");
    if(fgets(str,BUFLEN,stdin))
    printf("Insira uma frase:");
    if(fgets(str2,BUFLEN,stdin))
    repete(str,str2);
}
