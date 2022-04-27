#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char piece;
    int turn;
    int xPos;
    int yPos;
} PlayerState;

PlayerState* randomPlayerState() {
    PlayerState* ps1 = (PlayerState*) malloc(sizeof(PlayerState));
    ps1->piece = 'Q';
    ps1->turn = 12;
    ps1->xPos = 6;
    ps1->yPos = 0;

    return ps1;
}

// memory stack vs memory heap
int main() {
    PlayerState *ps1 = randomPlayerState();
    printf("%c\n", ps1->piece);
    free(ps1);

    // int arr[20];
    int* arr = (int*) malloc(sizeof(int) * 20);
    free(arr);
    arr = (int*) malloc(sizeof(int) * 30);
}

