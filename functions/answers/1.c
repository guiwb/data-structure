#include <stdio.h>

void main()
{
    int q;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &q);

    int alunos[q][2], mais_alto = 0, qtd_alunas = 0, soma_altura_alunas = 0;

    for (int i = 0; i < q; i++)
    {
        printf("Informe a altura (em cm) do(a) aluno(a) %d: ", i + 1);
        scanf("%d", &alunos[i][0]);

        printf("Informe o sexo do(a) aluno(a) %d: [1] Masculino / [2] Feminino ", i + 1);
        scanf("%d", &alunos[i][1]);

        if (alunos[i][1] == 1 && mais_alto < alunos[i][0])
            mais_alto = alunos[i][0];
        else if (alunos[i][1] == 2)
        {
            qtd_alunas++;
            soma_altura_alunas += alunos[i][0];
        }
    }

    printf("O aluno mais alto tem %dcm de altura\n", mais_alto);
    printf("A média de altura das alunas é %dcm", soma_altura_alunas / qtd_alunas);
}