#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
};


typedef struct Node Node;

struct LinkedList {
    Node* head;
    Node* tail;
    int size;
};

typedef struct LinkedList LinkedList;

void initList(LinkedList* list);
int getItem(LinkedList* list, int index);
void setItem(LinkedList* list, int index, int item);
void insertItem(LinkedList* list, int index, int item);
int removeItem(LinkedList* list, int index);
void displayList(LinkedList* list);

int main(void) {
    LinkedList a;
    initList(&a);
    insertItem(&a, 0, 1);
    insertItem(&a, 1, 2);
    insertItem(&a, 2, 3);
    removeItem(&a, 2);
    setItem(&a, 0, 5);
    // insertItem(&a, 0, 5);
    // insertItem(&a, 1, 5);
    // insertItem(&a, 3, 5);
    displayList(&a);
    // printf("size = %i\n", a.size);
    // printf("item = %i\n", getItem(&a, 1));
    return 0;
}

void displayList(LinkedList* list) {
    Node* trav = list->head;
    while (trav != NULL) {
        printf("%i ", trav->value);
        trav = trav->next;
    }
    printf("\n");
    return;
}

void initList(LinkedList* list) {
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}

Node* getNode(LinkedList* list, int index) {
    Node* current = list->head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }

    return current;
}

int getItem(LinkedList* list, int index) {
    if (index >= 0 && index <= list->size - 1) {
        Node* node =  getNode(list, index);
        return node->value;
    }

    return -1;
}

void setItem(LinkedList* list, int index, int item) {
    if (index >= 0 && index <= list->size - 1) {
        Node* node =  getNode(list, index);
        node->value = item;
    }
    return;
}

Node* createNode(int x) {
    Node* a = (Node*) malloc(sizeof(Node));
    a->value = x;
    a->next = NULL;
    return a;
}

void insertItem(LinkedList* list, int index, int item) {
    if (index >= 0 && index <= list->size) {
        Node* nodeToInsert = createNode(item);
        if (index == 0) {
            nodeToInsert->next = list->head;
            list->head = nodeToInsert;
        }

        if (index == list->size) {
            if (list->size != 0) {
                list->tail->next = nodeToInsert;
            }

            list->tail = nodeToInsert;
        }

        if (index > 0 && index < list->size) {
            Node* previous = getNode(list, index - 1);
            nodeToInsert->next = previous->next;
            previous->next = nodeToInsert;
        }

        list->size++;
    }
}

int removeItem(LinkedList* list, int index) {
    if (index >= 0 && index <= list->size - 1) {
        Node* nodeToRemove;

        if (index == 0) {
            nodeToRemove = list->head;
            list->head = nodeToRemove->next;
            nodeToRemove->next = NULL;
        } else {
            Node* previous = getNode(list, index - 1);
            nodeToRemove = previous->next;
            previous->next = nodeToRemove->next;
            nodeToRemove->next = NULL;
            if (index == list->size - 1) {
                list->tail = previous;
            }
        }
        free(nodeToRemove);
        list->size--;
        return 1;
    }
    return 0;
}
