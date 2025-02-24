#include <stdio.h>
#include <stdbool.h>
#define Max 50

int stack[Max];
int top = -1;

// Function to push an element onto the stack
void push(int data) {
    if (top == Max - 1) {
        printf("Stack is full\n");
        return;
    }
    stack[++top] = data;
}

// Function to check if the stack is empty
int isEmpty() {
    return top == -1;
}

// Function to pop an element from the stack
int pop() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top--];
}

// DFS function
void Dfs(int graph[Max][Max], int startnode, int numnodes) {
    bool visited[Max] = {false}; // Track visited nodes

    printf("DFS Traversal starting from node %d: ", startnode);

    push(startnode); // Push the starting node onto the stack

    while (!isEmpty()) {
        int currentnode = pop(); // Pop the top node from the stack

        // If the node is not visited, visit it
        if (!visited[currentnode]) {
            printf("%d ", currentnode);
            visited[currentnode] = true;
        }

        // Push all unvisited neighbors of the current node onto the stack
        for (int i = numnodes - 1; i >= 0; i--) { 
            if (graph[currentnode][i] == 1 && !visited[i]) {
                push(i);
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

    // Perform DFS
    Dfs(graph, startnode, numnodes);

    return 0;
}
