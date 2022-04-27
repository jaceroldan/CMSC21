#include <stdio.h>

typedef struct {
    int size;
    int arr[20];
} ArrayList;

void initList(ArrayList* list);
int getItem(ArrayList* list, int index);
void setItem(ArrayList* list, int index, int item);
void insertItem(ArrayList* list, int index, int item);
int removeItem(ArrayList* list, int index);

int main() {
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
    else if (index >= 0 && index <= list->size - 1) {
        for (int i = list->size; i > index; i--) {
            list->arr[i] = list->arr[i - 1];
        }
        list->arr[index] = item;
        list->size++;
    }

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
    }
}
