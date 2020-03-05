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
Team readTeam();
void scoredAGoal(int, Team *);
Player getStriker(Team);

void main()
{
    int player_number;
    Team team = readTeam();

    do
    {
        printf("Informe o número do jogador que marcou o gol: ");
        scanf("%d", &player_number);
        if (player_number != 99)
            scoredAGoal(player_number, &team);
    } while (player_number != 99);

    Player striker = getStriker(team);
    writePlayer(striker);
}

Player readPlayer()
{
    Player player;

    printf("Digite o numero do jogador: ");
    scanf("%d", &player.number);

    player.strikes = 0;

    return player;
}

void writePlayer(Player player)
{
    char *goal = player.strikes > 1 ? "gols" : "gol";
    printf("Camisa %02d com %d %s.", player.number, player.strikes, goal);
}

Team readTeam()
{
    Team team;

    printf("Informe o ano de criação da equipe: ");
    scanf("%d", &team.year);

    for (int i = 0; i < 5; i++)
        team.players[i] = readPlayer();

    return team;
}

void scoredAGoal(int player_number, Team *team)
{
    for (int i = 0; i < 5; i++)
        if (team->players[i].number == player_number)
            (&team->players[i])->strikes++;
}

Player getStriker(Team team)
{
    int greater = 0;
    Player striker;

    for (int i = 0; i < 5; i++)
        if (team.players[i].strikes > greater)
        {
            greater = team.players[i].strikes;
            striker = team.players[i];
        }

    return striker;
}