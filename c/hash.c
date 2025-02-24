// // #include <stdio.h>
// // #include <stdlib.h>

// // #define SIZE 10

// // struct HashTable {
// //     int keys[SIZE];
// //     int values[SIZE];
// //     int occupied[SIZE];
// // };


// // void initialize(struct HashTable *table) {
// //     for (int i = 0; i < SIZE; i++) {
// //         table->keys[i] = -1;  
// //         table->values[i] = -1;
// //         table->occupied[i] = 0;  
// //     }
// // }

// // int hash(int key) {
// //     return key % SIZE;
// // }

// // void insert(struct HashTable *table, int key, int value) {
// //     int index = hash(key);

// //     while (table->occupied[index]) {
// //         index = (index + 1) % SIZE;
// //     }

// //     table->keys[index] = key;
// //     table->values[index] = value;
// //     table->occupied[index] = 1;
// // }


// // int search(struct HashTable *table, int key) {
// //     int index = hash(key);

// //     while (table->occupied[index]) {
// //         if (table->keys[index] == key) {
// //             return table->values[index];
// //         }
// //         index = (index + 1) % SIZE;
// //     }

// //     return -1; 
// // }

// // int main() {
// //     struct HashTable table;
// //     initialize(&table);

    
// //     insert(&table, 10, 100);
// //     insert(&table, 20, 200);
// //     insert(&table, 30, 300);
// //     insert(&table, 40, 400);

    
// //     int value1 = search(&table, 10);
// //     int value2 = search(&table, 30);
// //     int value3 = search(&table, 50);

// //     printf("Value for key 10: %d\n", value1); 
// //     printf("Value for key 30: %d\n", value2); 
// //     printf("Value for key 50: %d\n", value3); 

// //     return 0;
// // }

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>

// typedef struct Node {
//     int vertex;
//     struct Node* next;
// } Node;

// typedef struct Graph {
//     int numVertices;
//     Node** adjLists;
//     bool* visited;
// } Graph;

// typedef struct Queue {
//     int* items;
//     int front, rear, size, capacity;
// } Queue;

// Queue* createQueue(int capacity) {
//     Queue* queue = (Queue*)malloc(sizeof(Queue));
//     queue->capacity = capacity;
//     queue->front = 0;
//     queue->size = 0;
//     queue->rear = capacity - 1;
//     queue->items = (int*)malloc(capacity * sizeof(int));
//     return queue;
// }

// bool isEmpty(Queue* queue) {
//     return queue->size == 0;
// }

// void enqueue(Queue* queue, int item) {
//     if (queue->size == queue->capacity) return;
//     queue->rear = (queue->rear + 1) % queue->capacity;
//     queue->items[queue->rear] = item;
//     queue->size++;
// }

// int dequeue(Queue* queue) {
//     if (isEmpty(queue)) return -1;
//     int item = queue->items[queue->front];
//     queue->front = (queue->front + 1) % queue->capacity;
//     queue->size--;
//     return item;
// }

// Graph* createGraph(int vertices) {
//     Graph* graph = (Graph*)malloc(sizeof(Graph));
//     graph->numVertices = vertices;
//     graph->adjLists = (Node**)malloc(vertices * sizeof(Node*));
//     graph->visited = (bool*)malloc(vertices * sizeof(bool));

//     for (int i = 0; i < vertices; i++) {
//         graph->adjLists[i] = NULL;
//         graph->visited[i] = false;
//     }

//     return graph;
// }

// void addEdge(Graph* graph, int src, int dest) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     newNode->vertex = dest;
//     newNode->next = graph->adjLists[src];
//     graph->adjLists[src] = newNode;

//     newNode = (Node*)malloc(sizeof(Node));
//     newNode->vertex = src;
//     newNode->next = graph->adjLists[dest];
//     graph->adjLists[dest] = newNode;
// }

// void bfs(Graph* graph, int startVertex) {
//     Queue* queue = createQueue(graph->numVertices);

//     graph->visited[startVertex] = true;
//     enqueue(queue, startVertex);

//     while (!isEmpty(queue)) {
//         int currentVertex = dequeue(queue);
//         printf("%d ", currentVertex);

//         Node* temp = graph->adjLists[currentVertex];
//         while (temp) {
//             int adjVertex = temp->vertex;

//             if (!graph->visited[adjVertex]) {
//                 graph->visited[adjVertex] = true;
//                 enqueue(queue, adjVertex);
//             }
//             temp = temp->next;
//         }
//     }

//     free(queue->items);
//     free(queue);
// }

// int main() {
//     int vertices = 6;
//     Graph* graph = createGraph(vertices);

//     addEdge(graph, 0, 1);
//     addEdge(graph, 0, 2);
//     addEdge(graph, 1, 3);
//     addEdge(graph, 1, 4);
//     addEdge(graph, 2, 4);
//     addEdge(graph, 3, 5);
//     addEdge(graph, 4, 5);

//     printf("Breadth-First Search starting from vertex 0:\n");
//     bfs(graph, 0);


//     for (int i = 0; i < vertices; i++) {
//         Node* temp = graph->adjLists[i];
//         while (temp) {
//             Node* toFree = temp;
//             temp = temp->next;
//             free(toFree);
//         }
//     }
//     free(graph->adjLists);
//     free(graph->visited);
//     free(graph);

//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int vertex;
    struct Node* next;
} Node;

typedef struct Graph {
    int numVertices;
    Node** adjLists;
    bool* visited;
} Graph;

typedef struct Stack {
    int* items;
    int top;
    int capacity;
} Stack;

Stack* createStack(int capacity) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->items = (int*)malloc(capacity * sizeof(int));
    return stack;
}

bool isEmpty(Stack* stack) {
    return stack->top == -1;
}

void push(Stack* stack, int item) {
    stack->items[++stack->top] = item;
}

int pop(Stack* stack) {
    if (isEmpty(stack)) return -1;
    return stack->items[stack->top--];
}

Graph* createGraph(int vertices) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->numVertices = vertices;
    graph->adjLists = (Node**)malloc(vertices * sizeof(Node*));
    graph->visited = (bool*)malloc(vertices * sizeof(bool));

    for (int i = 0; i < vertices; i++) {
        graph->adjLists[i] = NULL;
        graph->visited[i] = false;
    }

    return graph;
}

void addEdge(Graph* graph, int src, int dest) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->vertex = dest;
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;

    newNode = (Node*)malloc(sizeof(Node));
    newNode->vertex = src;
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}

void dfsIterative(Graph* graph, int startVertex) {
    Stack* stack = createStack(graph->numVertices);
    push(stack, startVertex);

    while (!isEmpty(stack)) {
        int vertex = pop(stack);

        if (!graph->visited[vertex]) {
            printf("%d ", vertex);
            graph->visited[vertex] = true;
        }

        Node* temp = graph->adjLists[vertex];
        while (temp) {
            int adjVertex = temp->vertex;
            if (!graph->visited[adjVertex]) {
                push(stack, adjVertex);
            }
            temp = temp->next;
        }
    }

    free(stack->items);
    free(stack);
}

int main() {
    int vertices = 6;
    Graph* graph = createGraph(vertices);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 5);
    addEdge(graph, 4, 5);

    printf("Depth-First Search starting from vertex 0 (Iterative):\n");
    dfsIterative(graph, 0);

    for (int i = 0; i < vertices; i++) {
        Node* temp = graph->adjLists[i];
        while (temp) {
            Node* toFree = temp;
            temp = temp->next;
            free(toFree);
        }
    }
    free(graph->adjLists);
    free(graph->visited);
    free(graph);

    return 0;
}
