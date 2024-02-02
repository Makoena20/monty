#include "monty.h"

/**
 * multiply_top_two_elements - Multiplies the top two elements of the stack.
 * @stack_head: Pointer to the head of the stack.
 * @line_number: Line number in the Monty file.
 * Return: No return value.
 */
void multiply_top_two_elements(stack_t **stack_head, unsigned int line_number)
{
    stack_t *current_node;
    int stack_length = 0, result;

    current_node = *stack_head;

    // Calculate the length of the stack
    while (current_node)
    {
        current_node = current_node->next;
        stack_length++;
    }

    // Check if the stack has less than two elements
    if (stack_length < 2)
    {
        fprintf(stderr, "L%d: can't multiply, stack too short\n", line_number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*stack_head);
        exit(EXIT_FAILURE);
    }

    // Multiply the top two elements and update the stack
    current_node = *stack_head;
    result = current_node->next->n * current_node->n;
    current_node->next->n = result;
    *stack_head = current_node->next;
    free(current_node);
}

