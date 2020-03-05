#include <stdio.h>

int maiorNumero(int, int);

void main()
{
    int n, a, b;

    printf("Informe o número de duplas a serem lidas: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Informa o primeiro número: ");
        scanf("%d", &a);

        printf("Informa o segundo número: ");
        scanf("%d", &b);
        int resposta = maiorNumero(a, b);

        if (resposta == -1)
            printf("Eles são iguais");
        else
            printf("%d", resposta);

        printf("\n\n");
    }
}

int maiorNumero(int a, int b)
{
    return a == b ? -1 : a < b ? b : a;
}