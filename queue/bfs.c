#include <stdio.h>
#include <stdbool.h>
#define Max 50

int que[Max];
int front = -1;
int rear = -1;

// Enqueue operation
void enque(int data) {
    if (rear == Max - 1) {
        printf("Queue is full\n");
        return;
    }
    if (rear == -1 && front == -1) {
        front = rear = 0;
    } else {
        rear++;
    }
    que[rear] = data;
}

// Check if the queue is empty
bool isempty() {
    return (front == -1 && rear == -1);
}

// Dequeue operation
int deque() {
    if (isempty()) {
        printf("Queue is empty\n");
        return -1;
    }
    int dequeuedElement = que[front];
    if (front == rear) {
        front = rear = -1; // Reset the queue
    } else {
        front++;
    }
    return dequeuedElement;
}

// Display the queue (optional for debugging)
void display() {
    if (isempty()) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = front; i <= rear; i++) {
        printf("%d ", que[i]);
    }
    printf("\n");
}

// BFS Function
void Bfs(int graph[Max][Max], int startnode, int numnodes) {
    bool visited[Max] = {false}; // Track visited nodes
    printf("BFS Traversal starting from node %d: ", startnode);

    visited[startnode] = true; // Mark the starting node as visited
    enque(startnode);          // Enqueue the starting node

    while (!isempty()) {
        int currentnode = deque(); // Dequeue the front node
        printf("%d ", currentnode);

        // Visit all neighbors of the current node
        for (int i = 0; i < numnodes; i++) {
            if (graph[currentnode][i] == 1 && !visited[i]) {
                visited[i] = true; // Mark the neighbor as visited
                enque(i);          // Enqueue the neighbor
            }
        }
    }
    printf("\n");
}

int main() {
    int numnodes;
    int graph[Max][Max];

    // Input the number of nodes
    printf("Enter the number of nodes: ");
    scanf("%d", &numnodes);

    // Input the adjacency matrix
    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < numnodes; i++) {
        for (int j = 0; j < numnodes; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    // Input the starting node
    int startnode;
    printf("Enter the starting node: ");
    scanf("%d", &startnode);

    // Perform BFS
    Bfs(graph, startnode, numnodes);

    return 0;
}
