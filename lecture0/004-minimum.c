#include <stdio.h>

int minimum(int[], int);

int main() {
    return 0;
}

// int arr = [1, '2', 3, '4']
// what your compiler expected: 00, 04, 08, 0c
// what actually happened: 00, 04, 05, 09
// ints, 4 bytes
// chars, 1 byte
// double, 8 byte

// char st[] = 'Hello world\0'
int minimum(int A[], int len) {
    int i = 1, min = A[0];
    int j = 0;
    // {1, 2, 3, 4, 0, -1, -2, -3}, length is 5
    // for(; A[j] != '\0', j++);
    // length = j + 1;

    for(; i < len; i++) {
        if (A[i] < min)
            min = A[i];
    }

    return min;
}
