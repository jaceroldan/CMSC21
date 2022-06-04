#include <stdio.h>

int main() {
    FILE* fp = fopen("data.txt", "w");

    if (!fp) {
        printf("An error occurred!\n");
        return -1;
    }

    printf("Enter account numbers, name, and balance.\nEnter EOF to end input.\n? ");

    int account;
    char name[21];
    double balance;

    while(scanf("%i %s %lf", &account, name, &balance) != EOF) {
        fprintf(fp, "%i %s %lf\n", account, name, balance);
        printf("? ");
    }

    fclose(fp);
}