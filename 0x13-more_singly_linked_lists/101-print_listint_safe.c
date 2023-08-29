#include "lists.h"
/**
 * print_listint_safe - prints a linked list with a loop safely
 * @head: points to the first node of the list
 * Return: return new node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_n = NULL;
	const listint_t *l_n = NULL;
	size_t counter = 0;
	size_t new_node;

	tmp_n = head;
	while (tmp_n)
	{
		printf("[%p] %d\n", (void *)tmp_n, tmp_n->n);
		counter++;
		tmp_n = tmp_n->next;
		l_n = head;
		new_node = 0;
		while (new_node < counter)
		{
			if (tmp_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)tmp_n, tmp_n->n);
				return (counter);
			}

			l_n = l_n->next;
			new_node++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
