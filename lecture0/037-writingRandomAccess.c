#include <stdio.h>

struct Record {
    int account;
    char name[21];
    double balance;
};

typedef struct Record Record;

int main() {
    FILE* fp = fopen("data.bin", "wb");

    if (!fp) {
        printf("An error occurred!\n");
        return -1;
    }

    printf("Enter account number 1 - 100 (0 to exit)\n? ");

    Record r;

    scanf("%i", &r.account);
    while(r.account > 0 && r.account <= 100) {
        printf("Enter name and balance\n? ");
        scanf("%s %lf", r.name, &r.balance);
        fseek(fp, sizeof(Record) * (r.account - 1), SEEK_SET);
        fwrite(&r, sizeof(Record), 1, fp);
        printf("Enter account number 1 - 100 (0 to exit)\n? ");
        scanf("%i", &r.account);
    }

    fclose(fp);
}