#include <stdio.h>

int main() {
    int x = 100;
    void* pointer;

    pointer = &x;

    // typecasting
    int *xptr = (int*) pointer;
    // printf("%i\n", *xptr);

    char c = 'a';
    int ascii = (int) c;
    printf("%i\n", ascii);

    return 0;
}