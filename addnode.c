#include "monty.h"

/**
 * addNodeToStack - Adds a node to the head of the stack
 * @head: Pointer to the head of the stack
 * @value: New value to be stored in the node
 * Return: No return value
 */
void addNodeToStack(stack_t **head, int value)
{
	stack_t *newNode, *currentNode;

	currentNode = *head;
	newNode = malloc(sizeof(stack_t));

	if (newNode == NULL)
	{
		printf("Error\n");
		exit(0);
	}

	if (currentNode)
	{
		currentNode->prev = newNode;
	}

	newNode->n = value;
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;
}

