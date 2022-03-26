#include <stdio.h>

int main() {
    /*
         -      -
        |  1 2 3 |
        |  4 5 6 |
        |  7 8 9 |
         -      -

            +

         -      -
        |  1 2 3 |
        |  4 5 6 |
        |  7 8 9 |
         -      -

        2  4   6
        8  10  12
        14 16  18
    */

    int matrix1[3][3] = {
       {1, 2, 3},
       {4, 5, 6},
       {7, 8, 9},
    };

    int matrix2[3][3] = {
       {1, 2, 3},
       {4, 5, 6},
       {7, 8, 9},
    };

    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%i ", matrix1[i][j] + matrix2[i][j]);
        printf("\n");
    }

    // matrix1 + matrix2?
    return 0;
}
