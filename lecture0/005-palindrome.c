#include <stdio.h>

int palindrome(char[]);

int main() {
    return 0;
}

int palindrome(char st[]) {
    // char st[] = "Hello\0"
    int len = strlen(st), i, j;

    // madam
    // i = 0
    // j = 4
    for (i = 0, j = len-1; i < j; i++, j--) {
        if (st[i] != st[j])
            return 0; // false
    }

    return 1;
}

