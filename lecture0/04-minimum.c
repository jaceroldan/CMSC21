#include <stdio.h>

int minimum(int[], int);

int main() {
    return 0;
}

int minimum(int A[], int len) {
    int i = 1, min = A[0];

    for(; i < len; i++) {
        if (A[i] < min)
            min = A[i];
    }

    return min;
}
