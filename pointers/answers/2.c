#include <stdio.h>

void exibeOnzeTracos(void);
void retanguloTracos(void);

void main()
{
    for (int i = 0; i < 2; i++)
    {
        retanguloTracos();
        printf("\n");
    }
}

void exibeOnzeTracos()
{
    for (int i = 0; i < 11; i++)
        printf("-");
}

void retanguloTracos()
{
    for (int i = 0; i < 4; i++)
    {
        exibeOnzeTracos();
        printf("\n");
    }
}