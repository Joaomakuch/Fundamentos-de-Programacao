#include<stdio.h>
#include<stdlib.h>
#include <windows.h>

#define ORG 'X'
#define VAZ ' '
#define TAM 101

void imprimeMatriz(char **mat,int nL,int nC){
	int i,j;
	for(i=0;i<nL;i++)
	{
		for(j=0;j<nC;j++)
		{
			printf("%c ",mat[i][j]);
		}
		printf("\n");
	}
}

void VerificaVida(char **mat,int nL, int nC)
{
	int i, j, g, h, countVizinhos=0, guardaPosicao[nL*nC], count = 0;

	for (i = 0; i < nL; i++)
	{
		for(j=0; j<nC; j++){
			for(h=i-1; h<=i+1; h++){
				for(g=j-1; g<=j+1; g++){
					if(h>=0 && h<nL && g>=0 && g<nC){
						if(h==i && g == j){
						}else{
							if(mat[h][g]==ORG){
								countVizinhos++;
							}
						}
					}

				}
			}
			if(mat[i][j]==VAZ){
				if(countVizinhos == 3){
					guardaPosicao[count] = ORG;
				}
				else{
					guardaPosicao[count] = mat[i][j];
				}
			}else{
				if(countVizinhos < 2){
					guardaPosicao[count] = VAZ;
				}else if(countVizinhos > 3){
					guardaPosicao[count] =VAZ;
				}
				else{
					guardaPosicao[count]= mat[i][j];
				}
			}
			countVizinhos = 0;
			count++;
		}
		printf("\n");
	}
	printf("\n");
	count = 0;
	for (i = 0; i < nL; i++)
	{
		for(j=0; j<nC; j++){
			mat[i][j] = guardaPosicao[count];
			count++;
		}
	}
}
char **alocaMatriz(int nL, int nC)
{
	char **mat;
	int i, j;
	mat = (char**)malloc (nL * sizeof (int*)) ;
	for (i=0; i < nC; i++){
		(mat)[i] = malloc (nC * sizeof (int));
	}
	return mat;
}

void limpaMatriz(char **mat, int nL, int nC)
{
	int i,j;
	for(i=0;i<nL;i++)
	for(j=0;j<nC;j++)
	mat[i][j]=VAZ;
}

void inicGlider(char **mat, int nL, int nC)
{
	int padrao[3][3]={{ORG,ORG,ORG},{ORG,VAZ,VAZ},{VAZ,ORG,VAZ}};
	int i,j,xInic,yInic;

	limpaMatriz(mat,nL,nC);

	xInic=nL-4;
	yInic=nC-4;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mat[xInic+i][yInic+j]=padrao[i][j];
		}
	}

}
void inicBlinker(char **mat, int nL, int nC)
{
	char padrao[1][3]={{ORG,ORG,ORG}};
	int i,j, xInic=nL/2, yInic=nC/2;

	limpaMatriz(mat,nL,nC);

	for(i=0;i<1;i++)
	for(j=0;j<3;j++)
	mat[xInic+i][yInic+j]=padrao[i][j];
}

void inicBloco(char **mat, int nL, int nC)
{
	char padrao[2][2]={{ORG,ORG},{ORG,ORG}};
	int i,j,xInic=nL/2, yInic=nC/2;


	limpaMatriz(mat,nL,nC);


	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	mat[xInic+i][yInic+j]=padrao[i][j];
}


void inicSapo(char **mat, int nL, int nC)
{

	char padrao[2][4]={{VAZ,ORG,ORG,ORG},{ORG,ORG,ORG,VAZ}};
	int i,j,xInic=nL/2, yInic=nC/2;

	limpaMatriz(mat,nL,nC);


	for(i=0;i<2;i++)
	for(j=0;j<4;j++)
	mat[xInic+i][yInic+j]=padrao[i][j];

}
void inicLWSS(char **mat, int nL, int nC)
{
	char padrao[4][5]={{VAZ,ORG,VAZ,VAZ,ORG},{ORG,VAZ,VAZ,VAZ,VAZ},{ORG,VAZ,VAZ,VAZ,ORG},{ORG,ORG,ORG,ORG,VAZ}};
	int i,j,xInic,yInic;

	limpaMatriz(mat,nL,nC);

	xInic=nL-5;
	yInic=nC-6;

	for(i=0;i<4;i++)
	for(j=0;j<5;j++)
	mat[xInic+i][yInic+j]=padrao[i][j];

}

void menuInicJogo(char **mat, int nL, int nC)
{
	int opcao;

	printf("(1)Bloco\n(2)Blinker\n(3)Sapo\n(4)Glider\n(5)LWSS\nEntre com a opcao: ");
	scanf("%d",&opcao);
	switch(opcao)
	{
		case 1:   inicBloco(mat,nL,nC); break;
		case 2:   inicBlinker(mat,nL,nC); break;
		case 3:   inicSapo(mat,nL,nC); break;
		case 4:   inicGlider(mat,nL,nC); break;
		case 5:   inicLWSS(mat,nL,nC); break;
	}

	imprimeMatriz(mat,nL,nC);

	printf("Se inicializacao correta digite qualquer tecla para iniciar o jogo..."); while(getchar()!='\n') getchar();

}

void desalocaMatriz(char **aux, int nL)
{
	int i;
	for (i = 0; i< nL; i++)
	{
		free(aux[i]);
	}
	free(aux);
}

void jogaJogoVida(char **mat, int nL, int nC)
{
	int k;
	int i;

	printf("\nDigite a quantidade de ciclos: ");
	scanf("%d", &k);

	for(i=0;i<k;i++)
	{
		system("cls");
		imprimeMatriz(mat,nL,nC);
		VerificaVida(mat,nL,nC);
		Sleep(500);
	}

	desalocaMatriz(mat,nL);
}



int main()
{
	char **mat;
	int i=0;
	char letra;
	int nL,nC;
	printf("Digite a quantidade de Linhas na sua matriz: ");
	scanf("%d", &nL);
	printf("\nDigite a quantidade de Colunas na sua matriz: ");
	scanf("%d", &nC);

    while (i!=-1)
    {
    mat = alocaMatriz(nL,nC);
	menuInicJogo(mat,nL,nC);
	jogaJogoVida(mat,nL,nC);
	system("cls");
	printf("Deseja continuar jogando?\nSe n%co deseja digite (-1), se deseja continuar pressione qualquer tecla num%crica: ", 198, 130);
	scanf("%d", &i);
    }
    desalocaMatriz(mat,nL);
 return 0;
}
