#include <stdio.h>
#define MAX 5

typedef struct {
    int arr[MAX];
    int front, rear;
} Queue;

void enqueue(Queue* queue, int value) {
    if (queue->rear < MAX - 1) {
        queue->arr[++queue->rear] = value;
    } else {
        printf("Fila cheia!\n");
    }
}

int dequeue(Queue* queue) {
    if (queue->front <= queue->rear) {
        return queue->arr[queue->front++];
    } else {
        printf("Fila vazia!\n");
        return -1;
    }
}

int main() {
    Queue queue;
    queue.front = 0;
    queue.rear = -1;

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    printf("Elemento removido: %d\n", dequeue(&queue));

    return 0;
}
