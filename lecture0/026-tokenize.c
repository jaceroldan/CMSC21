#include <stdio.h>
#include <string.h>

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
fraction add(fraction, fraction);
int gcd(int, int);
fraction tokenize(char[]);
int toInteger(char[]);

int main() {
    fraction a, d, e;
    fraction b;
    fraction c;
    fraction result;

    // a.num = 5;
    // a.deno = 9;
    // 5/9
    // 3/4

    // b.num = 3;
    // b.deno = 4;

    char input1[11], input2[11];
    scanf("%s", input1);
    scanf("%s", input2);
    
    a = tokenize(input1);
    b = tokenize(input2);

    display(add(a, b));

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

// 5/9 + 3/4
// 20/36 + 27/36
// 47/36

int gcd(int x, int y) {
    int r;

    while (x % y > 0) {
        r = x % y;
        x = y;
        y = r;
    }

    return r;
}

fraction add(fraction a, fraction b) {
    fraction result;
    result.deno = (a.deno * b.deno) / gcd(a.deno, b.deno);
    result.num = ((result.deno / a.deno) * a.num) + ((result.deno / b.deno) * b.num);

    return simplify(result);
}

// 1234
// 4 * 1 = 4
// 3 * 10 = 30
// 200
// 1000
int toInteger(char st[]) {
    int answer = 0, i, ten = 1;
    for (i = strlen(st) - 1; i >= 0; i--) {
        answer = answer + (st[i] - '0') * ten;
        ten = ten * 10;
    }

    return answer;
}
// 5/9
fraction tokenize(char st[]) {
    int i, j, slash = 0;
    fraction result;
    char num[11], deno[11];

    for (i = 0, j = 0; st[i] != '\0'; i++) {
        if (st[i] == '/') {
            num[i] = '\0';
            slash = 1;
            i++;
        }
        if (!slash) {
            num[i] = st[i];
        } else {
            deno[j] = st[i];
            j++;
        }
    }

    deno[j] = '\0';
    result.num = toInteger(num);
    result.deno = toInteger(deno);

    return simplify(result);
}
