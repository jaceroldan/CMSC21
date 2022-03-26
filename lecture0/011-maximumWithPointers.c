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
    // int arr[] = { 1, 2, 3, 4, 5 };

    // where A = 00, A[0] = 00, A[1] == 04
    // 1st iteration: A + 1 = 00 + 04 = 04
    // 2nd iteration: A + 2 = 00 + 08 = 08
    // *(A + 1)
    for (i = 1; i < n; i++)
        if (*(A+i) > max)
            max = *A + i;

    return max;
}

