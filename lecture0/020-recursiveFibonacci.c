#include <stdio.h>

// fib x: { n-1 + n-2 }
int fib(int);

//  fib(1) == 0, fib(2) == 1, fib(3) == 1, 2, 3, 5, 8, 13, 21, fib(10) == 34, fib(11) == 55, fib(12) == 89
// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89
int main() {
    printf("%i\n", fib(12));
}

// int fib(int n) {
//     int a = 0;
//     int b = 1; 
//     int ctr = 2;
//     int c;
//     if (n == 1)
//         return a;
//     else if (n == 2)
//         return b;
    
//     for (; ctr < n; ctr++) {
//         c = a + b;
//         a = b;
//         b = c;
//     }

//     return c;
// }

// what is fib(3)?

// fib(12)
// fib(10) + (fib11)
// fib(8) + fib(9) + fib(9) + fib(10)
// fib(6) + fib(7) + fib(7) + fib(8) + fib(7) + fib(8) + fib(8) + fib(8)

int fib(int n) {
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}
