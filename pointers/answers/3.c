#include <stdio.h>

void exibeDivisores(int);

void main()
{
    for (int i = 1; i <= 20; i++)
        exibeDivisores(i);
}

void exibeDivisores(int n)
{
    printf("%d: ", n);

    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            printf("%d ", i);

    printf("\n");
}