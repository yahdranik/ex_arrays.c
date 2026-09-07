#define MY_END_CUSTOM          "\033[0m"
#define MY_BLUE_AND_CURSIVE    "\033[3;34m"
#define MY_RED_AND_CURSIVE     "\033[3;31m"

struct GamesResult
{
    int goals_team1 = 0;
    int goals_team2 = 0;
};

enum UserChoice 
{
    PRINT_TRIANGLE,
    PRINT_RHOMBUS,
    PRINT_CIRCLE,
    PRINT_STAR,
    PRINT_TURNAMENT,
    RESTART_PROGRAMM
};

const int MAX_LEN = 20;
const int count_of_comands = 9;
const int count_of_games = count_of_comands * (count_of_comands + 1) / 2;

enum UserChoice check_input();
void print_turnament_table();
void print_triangle();
void print_table( int* array, int size);
void print_one_struct( struct GamesResult game);
void print_header_of_table( const char** names, int n);
void print_list_of_table( const char** names, int i);
void print_rhombus();
void print_circle();
void clean_buffer();

struct GamesResult game1 = {3, 1};
struct GamesResult game2 = {2, 2};
struct GamesResult game3 = {1, 3};
struct GamesResult game4 = {4, 0};
struct GamesResult game5 = {2, 1};
struct GamesResult game6 = {0, 3};
struct GamesResult game7 = {3, 3};
struct GamesResult game8 = {5, 1};
struct GamesResult game9 = {1, 1};
struct GamesResult game10 = {0, 4};
struct GamesResult game11 = {3, 0};
struct GamesResult game12 = {2, 2};
struct GamesResult game13 = {1, 2};
struct GamesResult game14 = {4, 1};
struct GamesResult game15 = {0, 0};
struct GamesResult game16 = {2, 3};
struct GamesResult game17 = {5, 0};
struct GamesResult game18 = {3, 2};
struct GamesResult game19 = {1, 4};
struct GamesResult game20 = {2, 1};
struct GamesResult game21 = {0, 2};
struct GamesResult game22 = {4, 3};
struct GamesResult game23 = {3, 1};
struct GamesResult game24 = {1, 1};
struct GamesResult game25 = {0, 5};
struct GamesResult game26 = {6, 2};
struct GamesResult game27 = {2, 0};
struct GamesResult game28 = {1, 3};
struct GamesResult game29 = {4, 4};
struct GamesResult game30 = {3, 0};
struct GamesResult game31 = {0, 1};
struct GamesResult game32 = {5, 3};
struct GamesResult game33 = {2, 2};
struct GamesResult game34 = {1, 0};
struct GamesResult game35 = {0, 6};
struct GamesResult game36 = {3, 3};
