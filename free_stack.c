#include "monty.h"
/**
* clear_stack - releases memory allocated for a doubly linked list
* @stack_head: pointer to the head of the stack
*/
void clear_stack(stack_t *stack_head)
{
	stack_t *temp;

	temp = stack_head;
	while (stack_head)
	{
		temp = stack_head->next;
		free(stack_head);
		stack_head = temp;
	}
}

