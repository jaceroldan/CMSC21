#include <stdio.h>

int maximum(int*, int);

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };

    // printf("%p\n", &arr[0]);
    // printf("%p\n", &arr[1]);
    // printf("%p\n", &arr[2]);
    // printf("%p\n", &arr[3]);
    // printf("%p\n", &arr[4]);

    // int i;
    // for (i = 0; i < 5; i++) {
    //     printf("address of arr[%i]: %p\n", i, arr + i);
    //     printf("arr[%i] = %i\n", i, *(arr+i));
    // }

    int m = maximum(arr, 5);
    printf("The biggest element is %i\n", m);
    return 0;
}

int maximum(int *A, int n) {
    int max = *A, i;

    for (i = 1; i < n; i++)
        if (*A+i > max)
            max = *A + i;

    return max;
}

