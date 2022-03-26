#include <stdio.h>

int countDigits(char*);

int main() {
    char str[]="a1234";
    printf("address of pointer str: %p\n", &str);
    printf("address held by str: %p\n", str);
    printf("\n");
    // str++;

    printf("%i\n", countDigits(str));

    return 0;
}

int countDigits(char *st) {
    printf("address of pointer st: %p\n", &st);
    printf("address held by st: %p\n", st);

    int count = 0;

    while (*st != '\0') {
        if (*st >= '0' && *st <= '9')
            count++;
        st = st + 1;
    }

    return count;
}

