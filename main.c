#include <stdio.h>
#include "aluno.h"

int main() {

    Aluno alunos[100];
    int i, n;
    float media;

    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        printf("Informe os dados do aluno(%d): ", i + 1);

        scanf("%s %d %f %f",
              alunos[i].nome,
              &alunos[i].matricula,
              &alunos[i].nota1,
              &alunos[i].nota2);
    }

    printf("\n");

    for (i = 0; i < n; i++) {

        media = (alunos[i].nota1 + alunos[i].nota2) / 2;

        printf("%d %-10s %.2f %.2f %.2f\n",
               alunos[i].matricula,
               alunos[i].nome,
               alunos[i].nota1,
               alunos[i].nota2,
               media);
    }

    return 0;
}
