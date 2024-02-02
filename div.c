#include "monty.h"

/**
 * f_div - Divides the top two elements of the stack.
 * @head: Pointer to the stack head
 * @counter: Line number
 * Return: No return value
*/
void f_div(stack_t **head, unsigned int counter)
{
    stack_t *current;
    int stack_length = 0, result;

    current = *head;

    // Count the number of elements in the stack
    while (current)
    {
        current = current->next;
        stack_length++;
    }

    // Check if the stack has less than two elements
    if (stack_length < 2)
    {
        fprintf(stderr, "L%d: Unable to perform division, stack is too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    current = *head;

    // Check for division by zero
    if (current->n == 0)
    {
        fprintf(stderr, "L%d: Division by zero\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    // Perform division and update the stack
    result = current->next->n / current->n;
    current->next->n = result;
    *head = current->next;
    free(current);
}

