#include <stdio.h>

int main() {
    /*
    R B K Q I K B R
    P P P P P P P P
    x x x x x x x x
    x x x x x x x x
    x x x x x x x x
    x x x x x x x x
    P P P P P P P P
    R B K Q I K B R
    */
    int arr[5] = { 1, 2, 3, 4, 5 };
    char chess[8][8] = {
        {'R', 'K', 'B', 'Q', 'I', 'B', 'K', 'R'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        /*2*/ {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
        //     0     1    2   3             4
        /*3*/ {'x', 'x', 'x', 'x', /*THIS*/ 'u', /*THIS*/ 'x', 'x', 'x'},
        
        {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
        {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'K', 'B', 'Q', 'I', 'B', 'K', 'R'},
    };

    printf("State at 0, 0 is %c\n", chess[0][0]);
    printf("State at 7, 7 is %c\n", chess[7][7]);
    printf("Where is middle 'x' is %c\n", chess[3][4]);
    return 0;
}
