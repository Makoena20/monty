#include "monty.h"

/**
 * set_queue_mode - Sets the queue mode to true.
 * @head: Pointer to the stack head.
 * @counter: Line number.
 * Return: No return value.
 */
void set_queue_mode(stack_t **head, unsigned int counter)
{
    (void)head;
    (void)counter;
    bus.lifi = 1;
}

/**
 * enqueue - Adds a node to the end of the stack.
 * @n: New value to be added.
 * @head: Pointer to the stack head.
 * Return: No return value.
 */
void enqueue(stack_t **head, int n)
{
    stack_t *new_node, *aux;

    aux = *head;
    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        printf("Error\n");
    }
    new_node->n = n;
    new_node->next = NULL;

    if (aux)
    {
        while (aux->next)
            aux = aux->next;
    }

    if (!aux)
    {
        *head = new_node;
        new_node->prev = NULL;
    }
    else
    {
        aux->next = new_node;
        new_node->prev = aux;
    }
}

