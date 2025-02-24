#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

struct HashTable {
    int keys[SIZE];
    int values[SIZE];
    int occupied[SIZE];
};

void initialize(struct HashTable *table) {
    for (int i = 0; i < SIZE; i++) {
        table->keys[i] = -1;  
        table->values[i] = -1;
        table->occupied[i] = 0;  
    }
}

int hash(int key) {
    return key % SIZE;  
}

void insert(struct HashTable *table, int key, int value) {
    int index = hash(key);
    int i = 0;

    while (table->occupied[(index + i * i) % SIZE]) {
        i++;
        if (i == SIZE) {
            printf("Error: Hash table is full\n");
            return;
        }
    }

    table->keys[(index + i * i) % SIZE] = key;
    table->values[(index + i * i) % SIZE] = value;
    table->occupied[(index + i * i) % SIZE] = 1;
}

int search(struct HashTable *table, int key) {
    int index = hash(key);
    int i = 0;

    while (table->occupied[(index + i * i) % SIZE]) {
        if (table->keys[(index + i * i) % SIZE] == key) {
            return table->values[(index + i * i) % SIZE];  
        }
        i++;
        if (i == SIZE) {
            break;  
        }
    }

    return -1;  
}

int main() {
    struct HashTable table;
    initialize(&table);

    insert(&table, 10, 100);
    insert(&table, 20, 200);
    insert(&table, 30, 300);
    insert(&table, 40, 400);

    int value1 = search(&table, 10);
    int value2 = search(&table, 30);
    int value3 = search(&table, 50);  

    printf("Value for key 10: %d\n", value1);
    printf("Value for key 30: %d\n", value2);
    printf("Value for key 50: %d\n", value3);

    return 0;
}
