#include <stdio.h>

void leDupla(int *, int *);
void duplaCrescente(int, int);

void main()
{
    int a, b;

    do
    {
        leDupla(&a, &b);
    } while (a != b);
}

void leDupla(int *a, int *b)
{
    printf("Informe o primeiro valor: ");
    scanf("%d", a);

    printf("Informe o segundo valor: ");
    scanf("%d", b);

    duplaCrescente(*a, *b);
}

void duplaCrescente(int a, int b)
{
    if (a > b)
        printf("%d %d\n\n", b, a);
    else if (a < b)
        printf("%d %d\n\n", a, b);
}