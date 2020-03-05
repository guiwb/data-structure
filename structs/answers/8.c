#include <stdio.h>

typedef struct
{
    int number, strikes;
} Player;

typedef struct
{
    int year;
    Player players[5];
} Team;

Player readPlayer();
void writePlayer(Player);
int isAStriker(Player);

void main()
{
    int i;
    Team team;

    printf("Informe o ano de criação da equipe: ");
    scanf("%d", &team.year);

    for (i = 0; i < 5; i++)
        team.players[i] = readPlayer();

    printf("\n\nA equipe fundada em %d tem os seguintes jogadores: \n\n", team.year);

    for (i = 0; i < 5; i++)
        writePlayer(team.players[i]);
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
    char *goal = player.strikes > 1 ? "gols" : "gol";
    printf("Camisa %02d com %d %s.", player.number, player.strikes, goal);

    if (isAStriker(player))
        printf(" Ele é um goleador!");

    printf("\n");
}

int isAStriker(Player player)
{
    return player.strikes > 5;
}