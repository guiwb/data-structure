#include <stdio.h>

int concatHour(Hour);
void printHour(Hour);

typedef struct
{
    int h, m, s;
} Hour;

void main()
{
    Hour firstHour, secondHour;

    printf("Informe o primeiro horário [HH:MM:SS]: ");
    scanf("%d:%d:%d", &firstHour.h, &firstHour.m, &firstHour.s);

    printf("Informe o segundo horário [HH:MM:SS]: ");
    scanf("%d:%d:%d", &secondHour.h, &secondHour.m, &secondHour.s);

    int firstConcat = concatHour(firstHour);
    int secondConcat = concatHour(secondHour);

    if (firstConcat > secondConcat)
        printHour(secondHour);
    else if (firstConcat < secondConcat)
        printHour(firstHour);
    else
        printf("Horários iguais");
}

void printHour(Hour hour)
{
    printf("%d:%d:%d", hour.h, hour.m, hour.s);
}

int concatHour(Hour hour)
{
    int ret = hour.h;

    ret *= 100;
    ret += hour.m;
    ret *= 100;
    ret += hour.s;

    return ret;
}