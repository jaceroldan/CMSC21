#include <stdio.h>

void swapFirstAndLast(int[], int);

int main() {
    // 1, 2, 3
    // int i, i1, i2;

    // array
    // int i1, i2, i3, i4, i5
    int i_array[5] = { 1, 5, 6, 7, 8 };
    // 8, 5, 6, 7, 1
    // printf("Inside main: The memory address of arr: %p\n", i_array);
    // printf("Inside main: \n i_array[0] is %i and i_array[4] is %i before calling function\n", i_array[0], i_array[4]);
    // printf("the value of the integer in i_array in the 1st position is %i at address %p\n", i_array[0], &i_array[0]);
    printf("The address of i_array is %p\n", &i_array);
    swapFirstAndLast(i_array, 5);
    // printf("Inside main: \n i_array[0] is %i and i_array[4] is %i after calling function\n", i_array[0], i_array[4]);
    // int j_array[5] = { 1, 5, 6, 7, 8 };
    // int k_array[5] = { 1, 5, 6, 7, 8 };
    // i_array[5] = 11;

    // printf("the value of the integer in i_array in the 2nd position is %i at address %p\n", i_array[1], &i_array[1]);
    // printf("the value of the integer in i_array in the 3rd position is %i at address %p\n", i_array[2], &i_array[2]);
    // printf("the value of the integer in i_array in the 4th position is %i at address %p\n", i_array[3], &i_array[3]);
    // printf("the value of the integer in i_array in the 5th position is %i at address %p\n", i_array[4], &i_array[4]);

    // printf("\n\n");

    // printf("the value of the integer in j_array in the 1st position is %i at address %p\n", j_array[0], &j_array[0]);
    // printf("the value of the integer in j_array in the 1st position is %i at address %p\n", j_array[1], &j_array[1]);
    // printf("the value of the integer in j_array in the 1st position is %i at address %p\n", j_array[2], &j_array[2]);
    // printf("the value of the integer in j_array in the 1st position is %i at address %p\n", j_array[3], &j_array[3]);
    // printf("the value of the integer in j_array in the 1st position is %i at address %p\n", j_array[4], &j_array[4]);

    // printf("\n\n");

    // printf("the value of the integer in k_array in the 1st position is %i at address %p\n", k_array[0], &k_array[0]);
    // printf("the value of the integer in k_array in the 1st position is %i at address %p\n", k_array[1], &k_array[1]);
    // printf("the value of the integer in k_array in the 1st position is %i at address %p\n", k_array[2], &k_array[2]);
    // printf("the value of the integer in k_array in the 1st position is %i at address %p\n", k_array[3], &k_array[3]);
    // printf("the value of the integer in k_array in the 1st position is %i at address %p\n", k_array[4], &k_array[4]);

    // printf("%i", i_array[7]);

    return 0;
}

// [1 2 3 4 5]
// [5 2 3 4 1]

void swapFirstAndLast(int A[], int length) {
    printf("The address of i_array is %p\n", &A);
    int tmp = A[0];
    A[0] = A[length-1];
    A[length-1] = tmp;
    // printf("Inside swapFirstAndLast: The memory address of arr: %p\n", A);
}