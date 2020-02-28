#include <stdio.h>

void main()
{
    int q, y, i, c = 0;

    do
    {
        printf("Digite o valor de Q (máximo 10): ");
        scanf("%d", &q);
    } while (q > 10);

    int z[q], w[q];

    for (i = 0; i < q; i++)
    {
        printf("Digite o z[%d]: ", i);
        scanf("%d", &z[i]);
    }

    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    for (i = 0; i < q; i++)
    {
        if (z[i] > y)
        {
            w[c] = z[i];
            c++;
        }
    }

    for (i = 0; i < c; i++)
        printf("%d ", w[i]);
}