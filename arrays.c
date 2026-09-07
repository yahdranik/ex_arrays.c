#include <stdio.h>
#include <cassert>
#include <string.h>
#include "res_of_games.h"

void clean_buffer() 
{
    while ((getchar()) != '\n');
}

void print_table( int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", *(array + i));
    }
}

void print_one_struct( struct GamesResult game )
{
    printf("%d  :  %d      ", game.goals_team1, game.goals_team2);
}

void print_header_of_table( const char** names, int n )
{
    printf("%-17s", " ");

    for (int i = 0; i < n - 1; i++)
    {
        printf(MY_BLUE_AND_CURSIVE "%-13s" MY_END_CUSTOM, names[i]);
    }
}

void print_list_of_table( const char** names, int i )
{
    if (i < count_of_comands)
    {
        printf(MY_BLUE_AND_CURSIVE "%-17s" MY_END_CUSTOM, names[i]);
    }
}

enum UserChoice check_input()
{
    char string[ MAX_LEN ] = {};

    scanf("%s", string);
    assert(string);

    if (strcmp(string, "TRIANGLE") == 0)
    {
        clean_buffer();
        return PRINT_TRIANGLE;
    }
    else if ((strcmp(string, "RHOMBUS") == 0))
    {
        clean_buffer();
        return PRINT_RHOMBUS;
    }
    else if ((strcmp(string, "CIRCLE") == 0))
    {
        clean_buffer();
        return PRINT_CIRCLE;
    }

    else if ((strcmp(string, "TURNAMENT") == 0))
    {
        clean_buffer();
        return PRINT_TURNAMENT;
    }

    else
    {
        clean_buffer();
        return RESTART_PROGRAMM;
    }
}

void print_turnament_table()
{
    struct GamesResult TurnamentTable[ count_of_games ] = {game1, 
                                                            game2, game3, 
                                                            game4, game5, game6, 
                                                            game7, game8, game9, game10, 
                                                            game11, game12, game13, game14, game15,
                                                            game16, game17, game18, game19, game20, game21, 
                                                            game22, game23, game24, game25, game26, game27, game28, 
                                                            game29, game30, game31, game32, game33, game34, game35, game36};

    const char* NamesComands[ count_of_comands ] = {"Angry Birds", "Cute Cats", "Best Dogs", "Crazy Frogs", 
                                                    "Dumb Bunnies", "Big Lions", "Fast Pigs",
                                                    "Small Mices", "Humsta Combat"};

    print_header_of_table( NamesComands, count_of_comands );
    printf("\n");

    int counter_on_line = 1;
    int number_of_game = 0;
    for (int i = 0; i < count_of_comands - 1; i++)
    {
        print_list_of_table(NamesComands, i + 1);

        for (int j = 0; j < counter_on_line; j++)
        {
            print_one_struct(TurnamentTable[ number_of_game ]);
            number_of_game += 1;
        }
        
        counter_on_line += 1;
        printf("\n");
    }
}

void print_triangle()                       // Спросить какого хуя
{
    // СПРОСИТЬ!!!! printf(MY_BLUE_AND_CURSIVE "Please enter high of triangle:\n" MY_END_CUSTOM);
    // int high_triangle = 0;
    // scanf("%d", &high_triangle);
                                            //  схуяли он ругается на массив переменной длины если он 
                                            // ЛОКАЛЬНЫЙ И ДЛИНА ЗАДАЕТСЯ КОНТАНТОЙ БЛЯТЬ
    // assert(high_triangle);
    // const int LEN_ARR = high_triangle * (high_triangle + 1) / 2;
    const int high_triangle = 10;
    const int LEN_ARR = high_triangle * (high_triangle + 1) / 2;

    char array[ LEN_ARR ] = {};
    int otstup_nah = (2 * high_triangle + 1) / 2;

    for (int i = 0; i < high_triangle; i++)
    {
        printf("%*s", otstup_nah - i, " ");

        for (int j = 0; j <= i; j++)
        {
            printf(MY_RED_AND_CURSIVE "%-2d" MY_END_CUSTOM, array[i]);
        }

        printf("%*s\n", otstup_nah - 1, " ");
    }
}

void print_rhombus()                         // Аналогично
{
    const int high_half_rhombus = 10;
    const int LEN_ARR = high_half_rhombus * (high_half_rhombus + 1) / 2;

    char array[ LEN_ARR ] = {};
    int otstup_nah = (2 * high_half_rhombus + 1) / 2;

    for (int i = 0; i < high_half_rhombus; i++)
    {
        printf("%*s", otstup_nah - i, " ");

        for (int j = 0; j <= i; j++)
        {
            printf(MY_RED_AND_CURSIVE "%-2d" MY_END_CUSTOM, array[i]);
        }

        printf("%*s\n", otstup_nah - 1, " ");
    }

    for (int i = high_half_rhombus - 2; i >= 0; i--)
    {
        printf("%*s", otstup_nah - i, " ");

        for (int j = 0; j <= i; j++)
        {
            printf(MY_RED_AND_CURSIVE "%-2d" MY_END_CUSTOM, array[i]);
        }

        printf("%*s\n", otstup_nah - 1, " ");
    }
}

void print_circle() // перепишу на эллипс
{
    const int radius = 8;
    const int LEN_ARR = radius * radius; 

    char array[ LEN_ARR ] = {};

    for (int y = 0; y < 2 * radius; y++)
    {
        for (int x = 0; x < 2 * radius; x++)
        {
            if ((x - radius) * (x - radius) + (y - radius) * (y - radius) < radius * radius)
            {
                printf("%d", array[x]);
            }

            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    printf(MY_BLUE_AND_CURSIVE "TRIANGLE - to print beautiful triangle\n"
           "RHOMBUS - to print amazing rhombus\n"
           "CIRCLE - to print great circle\n"
           "STAR - to print impressive star\n"
           "TURNAMENT - to print turnament table with results matches\n" MY_END_CUSTOM);
    enum UserChoice getting_mode = check_input();

    if (getting_mode == PRINT_TURNAMENT)
    {
        print_turnament_table();
    }
    
    else if (getting_mode == PRINT_TRIANGLE)
    {
        print_triangle();
    }

    else if (getting_mode == PRINT_RHOMBUS)
    {
        print_rhombus();
    }

    else if (getting_mode == PRINT_CIRCLE)
    {
        print_circle();
    }

    else if (getting_mode == RESTART_PROGRAMM)
    {
        printf(MY_RED_AND_CURSIVE "Please restart programm and enter the comand from menu\n" MY_END_CUSTOM);
    }
}
