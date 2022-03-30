#include <stdio.h>
#include "gamestate.h"

int main(int argc, char **argv)
{
    struct GameState game_state;
    initGameState(&game_state);
    printf("%d x %d\n", game_state.puzzle_width, game_state.puzzle_height);
    printf("Hello, world!\n");
    return 0;
}
