#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int size;
    int capacity;
    int *arr;
} Vector;

void initList(Vector*);
int getItem(Vector*, int);
void setItem(Vector*, int, int);
void insertItem(Vector*, int, int);
int removeItem(Vector*, int);
void displayList(Vector);

int main() {
    Vector a;
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
    insertItem(&a, 9, 10);

    displayList(a);

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
    displayList(a);

    removeItem(&a, 0);
    removeItem(&a, 0);
    removeItem(&a, 0);
    removeItem(&a, 0);
    removeItem(&a, 0);
    removeItem(&a, 0);
    removeItem(&a, 0);
    removeItem(&a, 0);
    removeItem(&a, 0);
    removeItem(&a, 0);
    removeItem(&a, 0);
    removeItem(&a, 0);
    removeItem(&a, 0);
    removeItem(&a, 0);
    displayList(a);

    removeItem(&a, 0);
    removeItem(&a, 0);
    removeItem(&a, 0);
    removeItem(&a, 0);
    displayList(a);

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
    int newCapacity = list->capacity / 3;
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
        if (list->capacity / 3 >= list->size - 1) {
            desize(list);   
        }
        for (int i = index; i < list->size - 1; i++) {
            list->arr[i] = list->arr[i + 1];
        }

        list->size--;

        return 1;
    }

    return 0;
}

void displayList(Vector list) {
    for (int i = 0; i < list.size; i++) {
        printf("%i ", list.arr[i]);
    }

    printf("\n");
    printf("size = %i, capacity = %i\n", list.size, list.capacity);
}
