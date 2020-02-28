#include <stdio.h>

int calcDivisao(int, int);

void main()
{
    int n, i, a, b;

    printf("Informe o número de duplas: ");
    scanf("%d", &n);
    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("Digite o primeiro valor: ");
        scanf("%d", &a);

        printf("Digite o segundo valor: ");
        scanf(" %d", &b);

        int resposta = calcDivisao(a, b);

        if (resposta == 1)
            printf("Divisão por zero\n");
    }
}

int calcDivisao(int a, int b)
{
    if (a == 0 || b == 0)
        return 1;

    printf("%.1f\n\n", (float)a / (float)b);
    return 0;
}