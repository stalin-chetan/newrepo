/* Write a program to create structure for the following data for a cricket game( Country name, Player name, playing 
type( eg. batting, balling of both), number of matches played by player and salary)
Input the detail for 11 players and then display information of only those player who had played more than 10 matches. */
#include <stdio.h>

struct Cricket
{
    char country_name[100];
    char player_name[100];
    char playing_type[100];
    int number_matches_played;
    int salary;
};

int main()
{
    struct Cricket players[2];
    for (int i = 0; i < 2; i++)
    {
        fflush(stdin);
        printf("Enter the player%d country: ", i);
        gets(players[i].country_name);

        fflush(stdin);
        printf("Enter the player%d name: ", i);
        gets(players[i].player_name);

        fflush(stdin);
        printf("Enter the playing type of the player%d (e.g. balling, bating or both):", i);
        gets(players[i].playing_type);

        fflush(stdin);
        printf("Enter the number of match played by player%d: ", i);
        scanf("%d", &players[i].number_matches_played);

        printf("Enter the salary of the player%d: ", i);
        scanf("%d", &players[i].salary);
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        if (players[i].number_matches_played > 10)
        {
            printf("Country name: ");
            puts(players[i].country_name);

            printf("Player name: ");
            puts(players[i].player_name);

            printf("Playing type: ");
            puts(players[i].playing_type);

            printf("Number of match played: %d", players[i].number_matches_played);
            printf("\n");

            printf("salary: %d", players[i].salary);
            printf("\n");
        }
    }
    return 0;
}