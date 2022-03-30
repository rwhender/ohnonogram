#include "gamestate.h"

void initGameState(struct GameState *game_state)
{
    int row_clues[MAX_PUZZLE_LENGTH][CLUE_LENGTH];
    int col_clues[MAX_PUZZLE_LENGTH][CLUE_LENGTH];
    enum TileState tiles[MAX_PUZZLE_LENGTH][MAX_PUZZLE_LENGTH];
    game_state->puzzle_width = 20;
    game_state->puzzle_height = 15;
    game_state->game_start_time = 0;
    game_state->cursor_x_pos = 0;
    game_state->cursor_y_pos = 0;
    game_state->elapsed_game_time = 0;
    int i;
    int j;
    for (i = 0; i < MAX_PUZZLE_LENGTH; i++)
    {
        for (j = 0; j < CLUE_LENGTH; j++)
        {
            game_state->row_clues[i][j] = 0;
            game_state->col_clues[i][j] = 0;
        }
        for (j = 0; j < MAX_PUZZLE_LENGTH; j++)
        {
            game_state->tiles[i][j] = empty;
        }
    }
}
