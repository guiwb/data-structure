#include <stdio.h>

void leDupla(int *, int *);
void duplaClassificada(int, int, int);
void ordemCrescente(int, int);
void ordemDescrescente(int, int);

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

    int soma = *a + *b;

    duplaClassificada(soma % 2, *a, *b);
}

void duplaClassificada(int ordem, int a, int b)
{
    ordem ? ordemDescrescente(a, b) : ordemCrescente(a, b);
}

void ordemCrescente(int a, int b)
{
    if (a > b)
        printf("%d %d\n\n", b, a);
    else if (a < b)
        printf("%d %d\n\n", a, b);
}

void ordemDescrescente(int a, int b)
{
    if (a < b)
        printf("%d %d\n\n", b, a);
    else if (a > b)
        printf("%d %d\n\n", a, b);
}