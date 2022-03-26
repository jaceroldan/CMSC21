#include <stdio.h>

int recursiveMultiplication(int, int);

int main() {
    int result = recursiveMultiplication(2, 8);
    printf("result = %i\n", result);
    return 0;
}

// int ordinaryRepetitiveMultiplication(int x, int y) {
//     int ctr = 0;
//     int result = 0;
//     while (ctr < y) {
//         result = result + x;
//         ctr++;
//     }

//     return result;
// }

/*
    result = 0
    ctr 0: 0 + 2 (result = 2)
    ctr 1: 2 + 2 (result = 4)
*/

// multiplication(2, 8)
// 2 + multiplication(2, 7)
// 2 + 2 + multiplication(2, 6)
// ... x never changes
// 2 + 2 + 2 + 2 + 2 + 2 + 2 + multiplication(2, 1)
// 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + multiplication(2, 0)
// 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 0
int recursiveMultiplication(int x, int y) {
    if (y == 0)
        return 0;
    printf("x is %i, y is %i\n", x, y);
    // missing result = result + x
    return x + recursiveMultiplication(x, y - 1);
}

/*
    main: x = 2, y = 8
    [1] recursiveMultiplication: x = 2, y = 8 | 2 + [2] recursiveMultiplication(2, 7)
    RESOLVED! [1] recursiveMultiplication: x = 2, y = 8 | 2 + 14 = 16

    [2] recursiveMultiplication: x = 2, y = 7 | 2 + [3] recursiveMultiplication(2, 6)
    [3] recursiveMultiplication: x = 2, y = 7 | 2 + [4] recursiveMultiplication(2, 5)
    ...
    [6] recursiveMultiplication: x = 2, y = 1 | 2 + [6] recursiveMultiplication(2, 0)
    RESOLVED! [7] recursiveMultiplication: x = 2, y = 1 | 2 + 4 = 6

    [7] recursiveMultiplication: x = 2, y = 1 | 2 + [8] recursiveMultiplication(2, 0)
    RESOLVED! [7] recursiveMultiplication: x = 2, y = 1 | 2 + 2 = 4

    [8] recursiveMultiplication: x = 2, y = 1 | 2 + [9] recursiveMultiplication(2, 0)
    RESOLVED! [8] recursiveMultiplication: x = 2, y = 1 | 2 + 0 = 2

    [9] recursiveMultiplication: x = 2, y = 0 | 0

    [1] 2 + 2 + [3] recursiveMultiplication(2, 6)
*/

// int recursiveMultiplicationWithCtr(int x, int y, int ctr) {
//     if (ctr == y)
//         return 0;
//     return x + recursiveMultiplicationWithCtr(x, y, ctr++);
// }
