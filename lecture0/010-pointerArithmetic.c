#include <stdio.h>

int main() {
    int x = 10, y = 20, z = 30;
    int *x_ptr = &x, *y_ptr = &y, *z_ptr = &z;

    printf("addresses of x, y, and z: %p %p %p\n", &x, &y, &z);
    printf("values in z_ptr, y_ptr, z_ptr: %i %i %i\n", *x_ptr, *y_ptr, *z_ptr);

    z_ptr = z_ptr + 1;
    x_ptr = x_ptr - 2;

    printf("x_ptr, y_ptr, and z_ptr: %p %p %p\n", x_ptr, y_ptr, z_ptr);
    printf("values in z_ptr, y_ptr, z_ptr: %i %i %i\n", *x_ptr, *y_ptr, *z_ptr);
    return 0;
}
