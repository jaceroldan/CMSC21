#include <stdio.h>

void square(int *);
void swap(int *, int *);

int main() {
    int x = 7, y = 13;
    int *x_ptr = &x, *y_ptr = &y;
    printf("Address of x is %p, address of y is %p\n", &x, &y);
    printf("Before: x = %i, y = %i\n", x, y);

    swap(x_ptr, y_ptr);
    printf("After: x = %i, y = %i\n", x, y);

    int n = 7;
    int *n_ptr = &n;
    square(n_ptr);
    printf("Square of n is %i\n", n);
    return 0;
}

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
    printf("x holds %p, y holds %p\n", x, y);
}

void square(int *x) {
    *x = *x * *x;
}
