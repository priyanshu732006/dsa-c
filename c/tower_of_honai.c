// #include <stdio.h>


// void towerOfHanoi(int n, char source, char target, char auxiliary) {
    
//     if (n == 1) {
//         printf("Move disk 1 from %c to %c\n", source, target);
//         return;
//     }

    
//     towerOfHanoi(n - 1, source, auxiliary, target);

//     printf("Move disk %d from %c to %c\n", n, source, target);

   
//     towerOfHanoi(n - 1, auxiliary, target, source);
// }

// int main() {
//     int n; 
//     printf("Enter the number of disks: ");
//     scanf("%d", &n);

//     towerOfHanoi(n, 'A', 'C', 'B'); 
//     return 0;
// }
 
//  #include <stdio.h>

// void decimalToBinary(int n) {

//     int binary[40]; 
//     int index = 0;

//     if (n == 0) {
//         printf("Binary representation: 0\n");
//         return;
//     }

//     while (n > 0) {
//         binary[index] = n % 2; 
//         n = n / 2;             
//         index++;
//     }

//     printf("Binary representation: ");
//     for (int i = index - 1; i >= 0; i--) {
//         printf("%d", binary[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int decimal;

//     printf("Enter a decimal number: ");
//     scanf("%d", &decimal);

//     decimalToBinary(decimal);

//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define MAX 100  
// typedef struct {
//     char items[MAX];
//     int top;
// } Stack;

// void initStack(Stack* s) {
//     s->top = -1;
// }


// int isFull(Stack* s) {
//     return s->top == MAX - 1;
// }


// int isEmpty(Stack* s) {
//     return s->top == -1;
// }


// void push(Stack* s, char item) {
//     if (!isFull(s)) {
//         s->items[++(s->top)] = item;
//     }
// }


// char pop(Stack* s) {
//     if (!isEmpty(s)) {
//         return s->items[(s->top)--];
//     }
//     return '\0'; 
// }


// void reverseString(char* str) {
//     Stack s;
//     initStack(&s);


//     for (int i = 0; i < strlen(str); i++) {
//         push(&s, str[i]);
//     }

//     for (int i = 0; i < strlen(str); i++) {
//         str[i] = pop(&s);
//     }
// }

// int main() {
//     char str[MAX];


//     printf("Enter a string: ");
//     fgets(str, MAX, stdin);
//     str[strcspn(str, "\n")] = 0; 

    
//     reverseString(str);

    
//     printf("Reversed string: %s\n", str);

//     return 0;
// }
//*Stack implementation using Queue */
#include <stdio.h>
#include <stdlib.h>

typedef struct Queue {
    int *array;
    int front, rear, size, capacity;
} Queue;

Queue* createQueue(int capacity) {
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->array = (int *)malloc(queue->capacity * sizeof(int));
    return queue;
}


int isFull(Queue *queue) {
    return (queue->size == queue->capacity);
}

int isEmpty(Queue *queue) {
    return (queue->size == 0);
}

void enqueue(Queue *queue, int item) {
    if (isFull(queue)) return;
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size++;
}

int dequeue(Queue *queue) {
    if (isEmpty(queue)) return -1;
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size--;
    return item;
}

int front(Queue *queue) {
    if (isEmpty(queue)) return -1;
    return queue->array[queue->front];
}

typedef struct Stack {
    Queue *queue1;
    Queue *queue2;
} Stack;

Stack* createStack(int capacity) {
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->queue1 = createQueue(capacity);
    stack->queue2 = createQueue(capacity);
    return stack;
}

void push(Stack *stack, int item) {
    enqueue(stack->queue2, item);
    while (!isEmpty(stack->queue1)) {
        enqueue(stack->queue2, dequeue(stack->queue1));
    }
    Queue *temp = stack->queue1;
    stack->queue1 = stack->queue2;
    stack->queue2 = temp;
}

int pop(Stack *stack) {
    return dequeue(stack->queue1);
}

int top(Stack *stack) {
    return front(stack->queue1);
}

int isStackEmpty(Stack *stack) {
    return isEmpty(stack->queue1);
}

int main() {
    Stack *stack = createStack(100);
    
    push(stack, 1);
    push(stack, 2);
    printf("Top element: %d\n", top(stack)); 
    printf("Popped element: %d\n", pop(stack)); 
    printf("Is stack empty? %d\n", isStackEmpty(stack));

    free(stack->queue1->array);
    free(stack->queue2->array);
    free(stack->queue1);
    free(stack->queue2);
    free(stack);
    return 0;
}
