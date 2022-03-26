#include <stdio.h>

int main() {
    int a = 1, b = 31;
    int *aptr = &a, *bptr = &b;
    int **aptr_ptr = &aptr, **bptr_ptr = &bptr;

    printf("aptr and bptr: %p %p\n", aptr, bptr);
    printf("addresses aptr and bptr: %p %p\n", &aptr, &bptr);
    printf("aptr_ptr and bptr_ptr: %p %p\n", aptr_ptr, bptr_ptr);
    printf("a and b: %i %i\n", a, b);
    printf("values in addresses held in aptr and bptr: %i %i\n", *aptr, *bptr);
    printf("values in addresses held in aptr_ptr and bptr_ptr: %p %p\n", *aptr_ptr, *bptr_ptr);
    printf("Double dereferencing??? %i %i\n", **aptr_ptr, **bptr_ptr);

    return 0;
}
