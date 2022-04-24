#include <stdio.h>

struct Player {
    char piece;
    int turn;
};
typedef struct Player Player;

int main() {
    Player player1;
    player1.piece = 'K';
    player1.turn = 0;

    printf("%c\n", player1.piece);

    Player *player1Ptr = &player1;

    player1Ptr->piece = 'Q';
    printf("%c\n", player1.piece);

    return 0;
}
