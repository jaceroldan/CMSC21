#include <stdio.h>

typedef enum {
    true = 1,
    false = 0
} boolean;

typedef enum {
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat,
    Sun
} day;

int main() {
    boolean flag = true;
    day mon = Mon, sun = Sun;
    printf("%i\n", flag);
    printf("Mon = %i\n", mon);
    printf("Sun = %i\n", sun);
}
