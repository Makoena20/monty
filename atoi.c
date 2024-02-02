#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

typedef struct {
    int stack[STACK_SIZE];
    int top;
} Stack;

Stack stack;

// Function to push an element onto the stack
void push(int value) {
    if (stack.top < STACK_SIZE - 1) {
        stack.top++;
        stack.stack[stack.top] = value;
    } else {
        // Handle stack overflow if needed
    }
}

// Function to print all values on the stack
void pall() {
    int i;
    for (i = stack.top; i >= 0; i--) {
        printf("%d\n", stack.stack[i]);
    }
}

int main() {
    // Initialize the stack
    stack.top = -1;

    // Example usage
    push(1);
    push(2);
    push(3);
    pall();

    return 0;
}

