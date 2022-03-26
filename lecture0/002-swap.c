#include <stdio.h>
void swap(int, int);

int main() {
    int x = 7, y = 11;
    printf("Inside main:\nx is %i and y is %i before calling swap. \n", x, y);
    swap(x, y);
    printf("Inside main:\nx is %i and y is %i after calling swap. \n", x, y);

    return 0;
}

void swap (int x, int y) {
    int tmp = x;
    printf("Inside swap:\nx is %i and y is %i before swapping.\n", x, y);
    x = y;
    y = tmp;
    printf("Inside swap:\nx is %i and y is %i after swapping.\n", x, y);
    // where is return?
}
