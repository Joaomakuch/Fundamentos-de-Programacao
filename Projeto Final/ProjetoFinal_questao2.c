#include<stdio.h>
#include<stdlib.h>
#include <windows.h>

#define ORG 'X'
#define VAZ ' '
#define TAM 101
#define BUFFER 1024

typedef struct tab{
char nomeJogo[TAM];
int dim1,dim2;
char **mat;
int ciclosVida;
}Tabuleiro;


void imprimeMatriz(Tabuleiro*tab){
	int i,j;
	for(i=0;i<tab->dim1;i++)
	{
		for(j=0;j<tab->dim1;j++)
		{
			printf("%c ",tab->mat[i][j]);
		}
		printf("\n");
	}
}

void VerificaVida(Tabuleiro*tab)
{
	int i, j, g, h, countVizinhos=0, guardaPosicao[tab->dim1*tab->dim2], count = 0;

	for (i = 0; i < tab->dim1; i++)
	{
		for(j=0; j<tab->dim2; j++){
			for(h=i-1; h<=i+1; h++){
				for(g=j-1; g<=j+1; g++){
					if(h>=0 && h<tab->dim1 && g>=0 && g<tab->dim2){
						if(h==i && g == j){
						}else{
							if(tab->mat[h][g]==ORG){
								countVizinhos++;
							}
						}
					}

				}
			}
			if(tab->mat[i][j]==VAZ){
				if(countVizinhos == 3){
					guardaPosicao[count] = ORG;
				}
				else{
					guardaPosicao[count] = tab->mat[i][j];
				}
			}else{
				if(countVizinhos < 2){
					guardaPosicao[count] = VAZ;
				}else if(countVizinhos > 3){
					guardaPosicao[count] =VAZ;
				}
				else{
					guardaPosicao[count]= tab->mat[i][j];
				}
			}
			countVizinhos = 0;
			count++;
		}
		printf("\n");
	}
	printf("\n");
	count = 0;
	for (i = 0; i < tab->dim1; i++)
	{
		for(j=0; j<tab->dim2; j++){
			tab->mat[i][j] = guardaPosicao[count];
			count++;
		}
	}
}
char **alocaMatriz(Tabuleiro*tab)
{
	int i, j;
	tab->mat = (char**)malloc (tab->dim1 * sizeof (int*)) ;
	for (i=0; i < tab->dim2; i++){
		tab->mat[i] = (char*)malloc (tab->dim2 * sizeof (int));
	}
	return tab->mat;
}

void limpaMatriz(Tabuleiro*tab)
{
	int i,j;
	for(i=0;i<tab->dim1;i++)
	for(j=0;j<tab->dim2;j++)
	tab->mat[i][j]=VAZ;
}

void insereInvasores(Tabuleiro*tab)
{
    FILE *a;
    int num[BUFFER],j=0, g=0, countLinhas=0, vet[BUFFER], countColunas=0, coluna[BUFFER];
    char *token;
    char str[BUFFER], inic[BUFFER];
    system("CLS");

    printf("Digite o nome do arquivo invasor com extensao .csv: ");
    fscanf(stdin,"%s",tab->nomeJogo);
    a = fopen(tab->nomeJogo, "r");

    system("CLS");
    printf("**********************************\n");
    printf("* Voce foi atacado por Invasores *\n");
    printf("**********************************\n");
    Sleep(1500);

    int i;
    int numIndex = 0;
    while (!feof(a))
    {
        countColunas=0;
        vet[countLinhas] = numIndex;
        countLinhas++;
        if (fgets(str, BUFFER, a))
        {
          token = strtok(str, ",");
          while (token != NULL)
          {
            num[numIndex] = atoi(token);
            numIndex++;
            countColunas++;
            token = strtok(NULL, ",");
          }
        }
        coluna[countLinhas-1] = countColunas-1;
      }

    fclose(a);
    for(i=0;i<countLinhas;i++)
	{
		for(j=0;j<coluna[i];j++)
		{
           if (vet[i] >= tab->dim1 || num[g+1] >= tab->dim2)
           {
              break;
           }
           if (tab->mat[num[vet[i]]][num[g+1]]== ORG)
           {
               tab->mat[num[vet[i]]][num[g+1]]=VAZ;
               g++;
           }
           else
           {
               tab->mat[num[vet[i]]][num[g+1]]=ORG;
               g++;
           }
          }
		g++;
	}
}

void arq(Tabuleiro*tab)
{
  FILE *a;
  int num[BUFFER],j=0, g=0, countLinhas=0, vet[BUFFER], countColunas=0, coluna[BUFFER];
  char *token;
  char str[BUFFER], inic[BUFFER];

  limpaMatriz(tab);

  printf("Digite o nome do arquivo com extensao .csv: ");
  fscanf(stdin,"%s",inic);

  a = fopen(inic, "r");

  int i;
  int numIndex = 0;
  while (!feof(a))
 {
    countColunas=0;
    vet[countLinhas] = numIndex;
    countLinhas++;
    if (fgets(str, BUFFER, a))
    {
      token = strtok(str, ",");
      while (token != NULL)
      {
        num[numIndex] = atoi(token);
        numIndex++;
        countColunas++;
        token = strtok(NULL, ",");
      }
    }
    coluna[countLinhas-1] = countColunas-1;
  }

  fclose(a);

for(i=0;i<countLinhas;i++)
	{
		for(j=0;j<coluna[i];j++)
		{
		    if (vet[i] >= tab->dim1 || num[g+1] >= tab->dim2)
       {
            break;
       }
          tab->mat[num[vet[i]]][num[g+1]]=ORG;
          g++;
        }
		g++;
	}
}

void inicGlider(Tabuleiro*tab)
{
	int padrao[3][3]={{ORG,ORG,ORG},{ORG,VAZ,VAZ},{VAZ,ORG,VAZ}};
	int i,j,xInic,yInic;

	limpaMatriz(tab);

	xInic=tab->dim1-4;
	yInic=tab->dim2-4;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			tab->mat[xInic+i][yInic+j]=padrao[i][j];
		}
	}

}
void inicBlinker(Tabuleiro*tab)
{
	char padrao[1][3]={{ORG,ORG,ORG}};
	int i,j, xInic=tab->dim1/2, yInic=tab->dim2/2;

	limpaMatriz(tab);

	for(i=0;i<1;i++)
	for(j=0;j<3;j++)
	tab->mat[xInic+i][yInic+j]=padrao[i][j];
}

void inicBloco(Tabuleiro*tab)
{
	char padrao[2][2]={{ORG,ORG},{ORG,ORG}};
	int i,j,xInic=tab->dim1/2, yInic=tab->dim2/2;


	limpaMatriz(tab);


	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	tab->mat[xInic+i][yInic+j]=padrao[i][j];
}


void inicSapo(Tabuleiro*tab)
{

	char padrao[2][4]={{VAZ,ORG,ORG,ORG},{ORG,ORG,ORG,VAZ}};
	int i,j,xInic=tab->dim1/2, yInic=tab->dim2/2;

	limpaMatriz(tab);


	for(i=0;i<2;i++)
	for(j=0;j<4;j++)
	tab->mat[xInic+i][yInic+j]=padrao[i][j];

}
void inicLWSS(Tabuleiro*tab)
{
	char padrao[4][5]={{VAZ,ORG,VAZ,VAZ,ORG},{ORG,VAZ,VAZ,VAZ,VAZ},{ORG,VAZ,VAZ,VAZ,ORG},{ORG,ORG,ORG,ORG,VAZ}};
	int i,j,xInic,yInic;

	limpaMatriz(tab);

	xInic=tab->dim1-5;
	yInic=tab->dim2-6;

	for(i=0;i<4;i++)
	for(j=0;j<5;j++)
	tab->mat[xInic+i][yInic+j]=padrao[i][j];

}

void menuInicJogo(Tabuleiro*tab)
{
	int opcao;

	printf("(1)Bloco\n(2)Blinker\n(3)Sapo\n(4)Glider\n(5)LWSS\n(6)Arquivo\nEntre com a opcao: ");
	scanf("%d",&opcao);
	switch(opcao)
	{
		case 1:   inicBloco(tab); break;
		case 2:   inicBlinker(tab); break;
		case 3:   inicSapo(tab); break;
		case 4:   inicGlider(tab); break;
		case 5:   inicLWSS(tab); break;
		case 6:   arq(tab); break;

	}

	imprimeMatriz(tab);

	printf("Se for a inicializacao correta digite qualquer tecla para iniciar o jogo..."); while(getchar()!='\n') getchar();

}

void desalocaMatriz(Tabuleiro*tab)
{
	int i;
	for (i = 0; i< tab->dim1; i++)
	{
		free(tab->mat[i]);
	}
	free(tab->mat);
}

void jogaJogoVida(Tabuleiro*tab)
{
	int i;

	printf("\nDigite a quantidade de ciclos: ");
	scanf("%d", &tab->ciclosVida);

	for(i=0;i<tab->ciclosVida;i++)
	{
	    if(i==tab->ciclosVida/2){
        insereInvasores(tab);}
		system("cls");
		imprimeMatriz(tab);
		VerificaVida(tab);
		Sleep(500);
	}

	desalocaMatriz(tab);
}



int main()
{
	Tabuleiro tab;
	int i=0;

	printf("Digite a quantidade de Linhas na sua matriz: ");
	scanf("%d", &tab.dim1);//dim1:LINHAS
	printf("\nDigite a quantidade de Colunas na sua matriz: ");
	scanf("%d", &tab.dim2);//dim2:COLUNAS

    while (i!=-1)
    {
    tab.mat = alocaMatriz(&tab);
	menuInicJogo(&tab);
	jogaJogoVida(&tab);
	system("cls");
	printf("Deseja continuar jogando?\nSe n%co deseja digite (-1), se deseja continuar pressione qualquer tecla num%crica: ", 198, 130);
	scanf("%d", &i);
    }
    desalocaMatriz(&tab);
 return 0;
}

