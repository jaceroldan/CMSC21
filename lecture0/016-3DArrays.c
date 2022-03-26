#include <stdio.h>

void display3DArray(int [2][2][2]);

int main() {
    int threeDimensionalArrays[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };

    display3DArray(threeDimensionalArrays);
    return 0;
}

void display3DArray(int array[2][2][2]) {
    int i, j, k;
    for (i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++)
                printf("%i ", array[i][j][k]);
            printf("\n");
        }
        printf("\n");
    }
}
