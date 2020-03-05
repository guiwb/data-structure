#include <stdio.h>

typedef struct
{
    int number, strikes;
} Player;

Player readPlayer();
void writePlayer(Player);
int isAStriker(Player);

void main()
{
    Player player = readPlayer();
    writePlayer(player);
}

Player readPlayer()
{
    Player player;

    printf("Digite o numero do jogador: ");
    scanf("%d", &player.number);

    printf("Infome a quantidade de gols que o jogador marcou: ");
    scanf("%d", &player.strikes);

    return player;
}

void writePlayer(Player player)
{
    printf("O jogador camisa %02d marcou %d gols.", player.number, player.strikes);

    if (isAStriker(player))
        printf(" Ele é um goleador!");
}

int isAStriker(Player player)
{
    return player.strikes > 5;
}