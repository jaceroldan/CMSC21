#include <stdio.h>

typedef struct {
    int size;
    int arr[20];
} ArrayList;

void initList(ArrayList*);
int getItem(ArrayList*, int);
void setItem(ArrayList*, int, int);
void insertItem(ArrayList*, int, int);
int removeItem(ArrayList*, int);
void displayList(ArrayList*);

int main() {
    ArrayList a;
    initList(&a);

    insertItem(&a, 0, 1);
    insertItem(&a, 1, 2);
    insertItem(&a, 2, 3);
    insertItem(&a, 3, 4);
    insertItem(&a, 4, 5);
    insertItem(&a, 5, 6);
    insertItem(&a, 6, 7);
    insertItem(&a, 7, 8);
    insertItem(&a, 8, 9);

    displayList(&a);

    removeItem(&a, 0);
    displayList(&a);

    insertItem(&a, 0, 1);
    insertItem(&a, 0, 10);
    displayList(&a);

    insertItem(&a, 0, 1);
    insertItem(&a, 1, 2);
    insertItem(&a, 2, 3);
    insertItem(&a, 3, 4);
    insertItem(&a, 4, 5);
    insertItem(&a, 5, 6);
    insertItem(&a, 6, 7);
    insertItem(&a, 7, 8);
    insertItem(&a, 8, 9);
    insertItem(&a, 9, 10);
    displayList(&a);

    setItem(&a, 0, 100);
    displayList(&a);
    return 0;
}

void initList(ArrayList *list) {
    list->size = 0;
    for (int i = 0; i < 20; i++) {
        list->arr[i] = -1;
    }
}

int getItem(ArrayList *list, int index) {
    if (index >= 0 && index <= list->size - 1) {
        return list->arr[index];
    }

    return -1;
}

void setItem(ArrayList *list, int index, int item) {
    if (index >= 0 && index <= list->size - 1) {
        list->arr[index] = item;
    }

    return;
}

// [1, 2, 3]
// [1, 5, 2, 3]

void insertItem(ArrayList *list, int index, int item) {
    if (list->size == 20) {
        return;
    }
    else if (index >= 0 && index <= list->size) {
        for (int i = list->size; i > index; i--) {
            list->arr[i] = list->arr[i - 1];
        }
        list->arr[index] = item;
        list->size++;
    }
    // printf("size = %i, index = %i, item = %i\n", list->size, index, item);
    return;
}

// remove index 1
// [1,3,4,5,5]
int removeItem(ArrayList *list, int index) {
    if (index >= 0 && index <= list->size - 1) {
        for (int i = index; i < list->size - 1; i++) {
            list->arr[i] = list->arr[i + 1];
        }

        // list->arr[list->size-1] = -1;
        list->size--;
        return 1;
    }

    return 0;
}

void displayList(ArrayList* list) {
    for (int i = 0; i < list->size; i++) {
        printf("%i ", list->arr[i]);
    }

    printf("\n");
}
