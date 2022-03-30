#ifndef GAMESTATE_H
#define GAMESTATE_H

#define MAX_PUZZLE_LENGTH 99
#define CLUE_LENGTH 99

#include <time.h>

enum TileState
{
    empty = 0,
    no = 1,
    maybe = 2,
    color1 = 3,
    color2 = 4,
    color3 = 5,
    color4 = 6
};

struct GameState
{
    // Game constants
    int puzzle_width;
    int puzzle_height;
    int row_clues[MAX_PUZZLE_LENGTH][CLUE_LENGTH];
    int col_clues[MAX_PUZZLE_LENGTH][CLUE_LENGTH];
    time_t game_start_time;
    // Game state that can change
    int cursor_x_pos;
    int cursor_y_pos;
    time_t elapsed_game_time;
    enum TileState tiles[MAX_PUZZLE_LENGTH][MAX_PUZZLE_LENGTH];
};

void initGameState(struct GameState *game_state);

#endif // GAMESTATE_H
