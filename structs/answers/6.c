#include <stdio.h>

typedef struct
{
    int number, strikes;
} Player;

void main()
{
    Player player;

    printf("Digite o numero do jogador: ");
    scanf("%d", &player.number);

    printf("Infome a quantidade de gols que o jogador marcou: ");
    scanf("%d", &player.strikes);

    printf("O jogador camisa %02d marcou %d gols!", player.number, player.strikes);
}