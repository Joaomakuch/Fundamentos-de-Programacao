#include <stdio.h>
#include <math.h>
#define MAX_ALUNOS 100

typedef struct {
  float p[3];
  float M;
}Provas;

typedef struct {
  int ra;
  int frequencia;
  Provas Ps;
}Aluno;

int main(void) {
  int n,i = 0,j;
  float desvios_Ps[3]={0.0, 0.0, 0.0}, medias_Ps[3]={0.0, 0.0, 0.0};
  Aluno vetAlunos[MAX_ALUNOS];
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    scanf("%d", &vetAlunos[i].ra);
    scanf("%f %f %f", &vetAlunos[i].Ps.p[0], &vetAlunos[i].Ps.p[1], &vetAlunos[i].Ps.p[2]);
    vetAlunos[i].Ps.M = (vetAlunos[i].Ps.p[0] + vetAlunos[i].Ps.p[1] + vetAlunos[i].Ps.p[2]) / 3;
    medias_Ps[0] += vetAlunos[i].Ps.p[0];
    medias_Ps[1] += vetAlunos[i].Ps.p[1];
    medias_Ps[2] += vetAlunos[i].Ps.p[2];
  }

  medias_Ps[0] /= n;
  medias_Ps[1] /= n;
  medias_Ps[2] /= n;

  for(int i = 0; i < n; i++){
    printf("RA: %d\n", vetAlunos[i].ra);
    printf("Prova 0: %f\n", vetAlunos[i].Ps.p[0]);
    printf("Prova 1: %f\n", vetAlunos[i].Ps.p[1]);
    printf("Prova 2: %f\n", vetAlunos[i].Ps.p[2]);
    printf("Media: %f\n", vetAlunos[i].Ps.M);
    printf("----------------\n");

    desvios_Ps[0] += (vetAlunos[i].Ps.p[0] - medias_Ps[0]) * (vetAlunos[i].Ps.p[0] - medias_Ps[0]);
    desvios_Ps[1] += (vetAlunos[i].Ps.p[1] - medias_Ps[1]) * (vetAlunos[i].Ps.p[1] - medias_Ps[1]);
    desvios_Ps[2] += (vetAlunos[i].Ps.p[2] - medias_Ps[2]) * (vetAlunos[i].Ps.p[2] - medias_Ps[2]);
  }

  desvios_Ps[0] = sqrt(desvios_Ps[0] / n);
  desvios_Ps[1] = sqrt(desvios_Ps[1] / n);
  desvios_Ps[2] = sqrt(desvios_Ps[2] / n);

  for(int i = 0; i < 3; i++){
    printf("Media geral P%d: %f\n", i, medias_Ps[i]);
    printf("Desvio padrao P%d: %f\n", i, desvios_Ps[i]);
  }
}
