#include <stdio.h>

void display(int);

int main() {
    // printf("Hello world!");
    display(5);
    return 0;
}

// display(5);
// display(4);
// display(3);
// display(2);
void display(int n) {
    printf("%i\n", n--);
    if (n == 0)
        return;
    display(n);
}
/*
    display (part ..n)
    display (part 2)
    display (part 1)
    main

*/
