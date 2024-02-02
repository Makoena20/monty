#include "monty.h"

/**
 * add_top_two_elements - Adds the top two elements of the stack.
 * @stack_head: Pointer to the head of the stack.
 * @line_number: Line number in the Monty script.
 * Return: No return value.
*/
void add_top_two_elements(stack_t **stack_head, unsigned int line_number)
{
	stack_t *current;
	int stack_length = 0, result;

	current = *stack_head;

	// Count the number of elements in the stack
	while (current)
	{
		current = current->next;
		stack_length++;
	}

	// Check if the stack has less than two elements
	if (stack_length < 2)
	{
		fprintf(stderr, "L%d: Unable to perform addition, stack is too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack_head);
		exit(EXIT_FAILURE);
	}

	// Perform addition and update the stack
	current = *stack_head;
	result = current->n + current->next->n;
	current->next->n = result;
	*stack_head = current->next;
	free(current);
}

