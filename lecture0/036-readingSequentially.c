#include <stdio.h>

int main() {
    FILE* fp = fopen("data.txt", "r");

    if (!fp) {
        printf("An error occurred!\n");
        return -1;
    }

    int account;
    char name[21];
    double balance;

    printf("Account No.\tName\tBalance\n");

    while(fscanf(fp, "%i %20s %lf", &account, name, &balance) != EOF) {
        printf("%i %s %lf\n", account, name, balance);
    }

    fclose(fp);
}
