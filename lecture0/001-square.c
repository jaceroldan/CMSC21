#include <stdio.h>

void square(int); // function prototype, declaration

int main() {
    int x, y, z, ans;

    printf("Enter an integer: ");
    scanf("%i", &x);

    printf("x: %i\n", x);

    printf("address of x: %p\n", &x);
    square(x);

    printf("x: %i\n", x);
    return 0;
}

// x = 2
void square(int x) {
    printf("address of x: %p\n", &x);
    printf("x inside square before squaring: %i\n", x);
    x = x*x;
    printf("x inside square after squaring: %i\n", x);
}
