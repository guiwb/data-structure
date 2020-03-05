#include <stdio.h>

typedef struct
{
    int h, m, s;
} Horario;

void main()
{
    Horario agora;

    printf("Informe a hora: ");
    scanf("%d", &agora.h);

    printf("Informe os minutos: ");
    scanf("%d", &agora.m);

    printf("Informe os segundos: ");
    scanf("%d", &agora.s);

    printf("%d:%d:%d", agora.h, agora.m, agora.s);
}
