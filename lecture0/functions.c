#include <stdio.h>

// create a function that RETURNS the sum of TWO INTEGERS
// DECLARING a function
int sum(int, int);
// arguments, parameters
// function declaration
// "int" is the return type of the function
int power(int, int);
int difference(int, int);
int jaceProduct(int, int);

int main() {
    // Let's do (x ^ (y ^ z)) 
    int x, y, z, i, temp, ans;

    // 2 ^ (2 ^ 2)
    do {
        printf("Enter a positive number for x: ");
        scanf("%i", &x);
    } while (x < 1);

    do {
        printf("Enter a positive number for y: ");
        scanf("%i", &y);
    } while (y < 1);

    do {
        printf("Enter a positive number for z: ");
        scanf("%i", &z);
    } while (z < 1);

    // int result = sum(x, y);
    // printf("Inside Main: x = %i, y = %i\n", x, y);
    // printf("result = %i", result);

    // compute for y ^ z first and store the value in some temp
    temp = power(y, z);
    // for (i = 0, temp = 1; i < z; i++) {
    //     temp = temp * y;
    // }
    // printf("temp = %i\n", temp);
    // int s = sum(x, y);
    // int d = difference(x, y);
    // printf("s = %i, d = %i", s, d);
    // jaceProduct(s, d);

    // then! compute for x^temp (remember that temp is y ^ z)
    ans = power(x, temp);
    // for (i = 0, ans = 1; i < temp; i++) {
    //     ans = ans * x;
    // }

    // 2 ^ (2 ^ 2)
    // 2 ^ (4)
    // 16
    printf("Memory address inside main: x = %p, y = %p\n", &x, &y);
    printf("%i ^ (%i ^ %i) = %i\n", x, y, z, ans);
    return 0;
}

// function definition
int sum(int x, int y) {
    return x + y;
}

int difference(int x, int y) {
    return x - y;
}

// int jaceProduct(int sum, int diff) {
//     printf("jaceProduct is equal to %i\n", sum * diff);
// }

// x, y are parameters or arguments
int power(int x, int y) {
    // int x, y;
    // get x and y from the site where the power was called
    printf("Memory address inside power: x = %p, y = %p\n", &x, &y);
    int i, result;
    for (i=0, result=1; i<y; i++)
        result = result * x;
    
    return result;
}
