#include <stdio.h>

void main()
{
    int l, c;

    printf("Informe a quantidade de linhas: ");
    scanf("%d", &l);

    printf("Informe a quantidade de colunas: ");
    scanf("%d", &c);

    int m[l][c];

    for (int x = 0; x < l; x++)
    {
        for (int y = 0; y < c; y++)
        {
            printf("Informe o valor de m[%d][%d]: ", x, y);
            scanf("%d", &m[x][y]);
        }
    }

    int v;

    do
    {
        printf("Informe um valor: ");
        scanf("%d", &v);

        if (v < 0)
            continue;

        int resultado = 0;

        for (int x = 0; x < l; x++)
        {
            for (int y = 0; y < c; y++)
            {
                if (m[x][y] == v)
                    resultado = 1;
            }
        }

        resultado == 1 ? printf("Está na matriz") : printf("Não está na matriz");

        printf("\n\n");
    } while (v > 0);
}