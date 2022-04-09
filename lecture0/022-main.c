#include "022-headers.h"
#include "022-headers.h"

int main() {
    int a = 7, b = 23;
    int A[] = {4, 100, 2, -7, 19};
    printf("%i\n", palindrome("level"));
    printf("%i\n", palindrome("lever"));
    printf("%i\n", fibonacci(0));
    printf("%i\n", fibonacci(1));
    printf("%i\n", fibonacci(4));
    swap(&a, &b);
    printf("%i %i\n", a, b);
    printf("%i %i\n", minimum(A, 5), maximum(A, 5));
}