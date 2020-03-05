#include <stdio.h>

void duplaCrescente(int, int);

void main()
{
    int a, b;

    do
    {
        printf("Informe o primeiro valor: ");
        scanf("%d", &a);

        printf("Informe o segundo valor: ");
        scanf("%d", &b);

        duplaCrescente(a, b);
    } while (a != b);
}

void duplaCrescente(int a, int b)
{
    if (a > b)
        printf("%d %d\n\n", b, a);
    else if (a < b)
        printf("%d %d\n\n", a, b);
}