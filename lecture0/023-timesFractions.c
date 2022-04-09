#include <stdio.h>

int times(int, int, int, int);

// 5/9 x 3/4 = 15/36 or 5/12
int main() {
    printf("%i\n", times(5, 9, 3, 4));
    return 0;
}

int times(int n1, int d1, int n2, int d2) {
    int n = n1 * n2;
    int d = d1 * d2;

    return n;
    return d;
}

