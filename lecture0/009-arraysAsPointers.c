#include <stdio.h> 

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int new_var = 123;

    // arr = &new_var;

    // const a = 12;
    // a = 13;

    printf("Arrays!\n");
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);
    printf("%p\n", &arr[2]);

    printf("\nRegular variables!\n");
    int x = 3, y = 4, z = 5;

    printf("%p\n", &x);
    printf("%p\n", &y);
    printf("%p\n", &z);

    // for (i = 0; i < 5; i++) {
    //     arr[i];
    // }
}
