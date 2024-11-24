#include <stdio.h>
#define MAX 5

typedef struct {
    int arr[MAX];
    int top;
} Stack;

void push(Stack* stack, int value) {
    if (stack->top < MAX - 1) {
        stack->arr[++stack->top] = value;
    } else {
        printf("Pilha cheia!\n");
    }
}

int pop(Stack* stack) {
    if (stack->top >= 0) {
        return stack->arr[stack->top--];
    } else {
        printf("Pilha vazia!\n");
        return -1;
    }
}

int main() {
    Stack stack;
    stack.top = -1;

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    printf("Elemento removido: %d\n", pop(&stack));

    return 0;
}
