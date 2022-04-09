#include <stdio.h>

typedef struct {
    int num;
    int deno;
} fraction;

// struct fraction {
//     int num, deno;
// };

void display(fraction);
fraction times(fraction, fraction);
fraction simplify(fraction);

int main() {
    fraction a, d, e;
    fraction b;
    fraction c;
    fraction result;

    a.num = 5;
    a.deno = 9;

    b.num = 3;
    b.deno = 4;

    // display(a);
    // display(b);
    result = times(a, b);
    display(result);

    return 0;
}

void display(fraction a) {
    printf("%i/%i\n", a.num, a.deno);
}

fraction times(fraction a, fraction b) {
    fraction result;

    result.num = a.num * b.num;
    result.deno = a.deno * b.deno;

    return simplify(result);
}

fraction simplify(fraction a) {
    int x = a.num, y = a.deno, r;
    fraction result;

    while (x % y > 0) {
        r = x % y;
        x = y;
        y = r;
    }

    result.num = a.num / r;
    result.deno = a.deno / r;

    return result;
}
