#include "monty.h"

/**
 * printCharFromStackTop - prints the character at the top of the stack,
 * followed by a new line
 * @stackHead: pointer to the head of the stack
 * @lineNumber: line number in the Monty file
 * Return: no return value
*/
void printCharFromStackTop(stack_t **stackHead, unsigned int lineNumber)
{
	stack_t *currentNode;

	currentNode = *stackHead;
	if (!currentNode)
	{
		fprintf(stderr, "L%d: unable to print char, stack is empty\n", lineNumber);
		fclose(bus.file);
		free(bus.content);
		freeStack(*stackHead);
		exit(EXIT_FAILURE);
	}
	if (currentNode->n > 127 || currentNode->n < 0)
	{
		fprintf(stderr, "L%d: unable to print char, value is out of range\n", lineNumber);
		fclose(bus.file);
		free(bus.content);
		freeStack(*stackHead);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", currentNode->n);
}

