#include <stdio.h>

int main() {
    // int *ptr1;
    // int *ptr2, *ptr3;
    // int *ptr4, x, y;

    int x = 13, y = 20;
    int *x_ptr, *y_ptr;

    x_ptr = &x;
    y_ptr = &y;

    printf("address of x: %p\t address of y: %p\n", &x, &y);
    printf("value of x_ptr: %p\t value of y_ptr: %p\n", x_ptr, y_ptr);
    // x_ptr = y_ptr;
    printf("value held by x_ptr: %i\n value held by y_ptr: %i\n", *x_ptr, *y_ptr);
    // x_ptr = NULL;

    // printf("value held by x_ptr: %i\n value held by y_ptr: %i\n", *x_ptr, *y_ptr);

    return 0;
}
