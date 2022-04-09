#include "022-headers.h"

int palindrome(char *st) {
    int i=0, j = strlen(st) - 1;

    for (; i< j; i++, j--)
        if (st[i] != st[j])
            return 0;
    
    return 1;
}

int fibonacci(unsigned int n) {
    int a = 0, b = 1, c;

    while (n > 0) {
        c = a + b;
        a = b;
        b = c;
        n--;
    }

    return b;
}

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int minimum(int A[], int n) {
    int min = A[0], i = 1;

    for (; i < n; i++)
        if(A[i] < min)
            min = A[i];

    return min;
}

int maximum(int A[], int n) {
    int max = A[0], i = 1;

    for (; i < n; i++)
        if(A[i] > max)
            max = A[i];

    return max;
}
