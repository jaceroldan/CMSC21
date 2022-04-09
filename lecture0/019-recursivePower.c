#include <stdio.h>

int recursivePower(int, int);
int recursivePower2(int, int);
int recursivePower3(int, int);


int main() {
    printf("%i\n", recursivePower(2, 5));
    printf("%i\n", recursivePower2(2, 5));
    printf("%i\n", recursivePower3(2, 5));
    return 0;
}

// x ^ y
// x * x * x ... * x 

int ctr;
int result;

// assuming that y is a positive integer

// 2 ^ 8
// recursivePower(2, 8)
// recursivePower(4, 7)
// recursivePower(8, 6)
// recursivePower(16, 5)
// recursivePower(32, 4)
// recursivePower(64, 3)
// recursivePower(128, 2)
// recursivePower(256, 1)
/*

x = 2, y = 3
(2 * 2, 3 - 1)
it would become
(4 * 4, 2 - 1)

*/

// x, y
// 2 ^ 4 = 16
// 4 ^ 2 = 16
// 16 ^ 1 = 16

/*
x = 3, y = 5
x = (3 * 3) = 9, y = 2
x = 3 * (9 * 9) = 81, y = 1

*/

int recursivePower2(int x, int y) {
    printf("called 2\n");
    if (y == 1) { // 1 op
        return x; // 32 ops
    } else {
        // return x * recursivePower(x, y - 1);
        if (y % 2 != 0) { // 2 ops
        // 2, 5
        // 4, 2
            return x * recursivePower2(x*x, y / 2); // if odd, 4 ops
        } else {
            return recursivePower2(x * x, y / 2); // if even, 3 ops
        }
    }
}

int recursivePower(int x, int y) {
    printf("called 1\n");
    // 21 ops
    if (y == 1) { // 1 op
        return x; // 1 op
    } else {
        return x * recursivePower(x, y-1); // 3 ops
    }
}

int recursivePower3(int x, int y) {
    if (y == 1) {
        return x;
    } else {
        if (y%2 == 0) {
            return recursivePower3(x, y/2) * recursivePower3(x, y/2);
        } else {
            return x * recursivePower3(x, y/2) * recursivePower3(x, y/2);
        }
    }
}
