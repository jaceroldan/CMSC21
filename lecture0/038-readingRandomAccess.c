#include <stdio.h>

struct Record {
    int account;
    char name[21];
    double balance;
};

typedef struct Record Record;

int main() {
    FILE* fp = fopen("data.bin", "rb");

    if (!fp) {
        printf("An error occurred!\n");
        return -1;
    }

    Record r;

    printf("Account No.\tName\tBalance\n");
    while (fread(&r, sizeof(Record), 1, fp) && !feof(fp)) {
        if (r.account != 0) {
            printf("%i %s %lf\n", r.account, r.name, r.balance);
        }
    }

    fclose(fp);
}