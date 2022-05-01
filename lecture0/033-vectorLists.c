#include <stdio.h>

typedef struct {
    int size;
    int capacity;
    int *arr;
} Vector;

void initList(Vector* list);
int getItem(Vector* list, int index);
void setItem(Vector* list, int index, int item);
void insertItem(Vector* list, int index, int item);
int removeItem(Vector* list, int index);

int main() {
    return 0;
}

void initList(Vector *list) {
    list->size = 0;
    list->capacity = 10;
    list->arr = (int*) malloc(sizeof(int) * list->capacity);
}

int getItem(Vector *list, int index) {
    if (index >= 0 && index <= list->size - 1) {
        return list->arr[index];
    }

    return -1;
}

void setItem(Vector *list, int index, int item) {
    if (index >= 0 && index <= list->size - 1) {
        list->arr[index] = item;
    }

    return;
}

// [1, 2, 3]
// [1, 5, 2, 3]

void resize(Vector* list) {
    int newCapacity = 2 * list->size;
    int *newArr = (int*) malloc(sizeof(int) * newCapacity);

    for(int i = 0; i < list->size; i++) {
        newArr[i] = list->arr[i];
    }

    list->capacity = newCapacity;
    free(list->arr);
    list->arr = newArr;
}

void desize(Vector* list) {
    int newCapacity = list->size / 3;
    int *newArr = (int*) malloc(sizeof(int) * newCapacity);

    for(int i = 0; i < list->size; i++) {
        newArr[i] = list->arr[i];
    }

    list->capacity = newCapacity;
    free(list->arr);
    list->arr = newArr;
}

void insertItem(Vector *list, int index, int item) {
    if (index >= 0 && index <= list->size) {
        if (list->size == list->capacity) {
            resize(list);
        }
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
int removeItem(Vector *list, int index) {
    if (index >= 0 && index <= list->size - 1) {
        if (list->capacity / 3 < list->size - 1) {
            desize(list);   
        }
        for (int i = index; i < list->size - 1; i++) {
            list->arr[i] = list->arr[i + 1];
        }

        list->size--;
    }
}
