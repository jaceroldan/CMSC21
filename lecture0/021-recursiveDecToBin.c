#include <stdio.h>

void decToBin(int);

int main() {
    decToBin(170);
    printf("\n");
    return 0;
}

void decToBin(int x) {
    if (x > 0) {
        decToBin(x / 2);
        printf("%i", x%2);
    }

    // int answer = 0, current = x, power = 1;

    // while (current > 0) {
        // answer = answer + (current % 2) * power;
        // current = current / 2;
        // power = power * 10;
    // }
}