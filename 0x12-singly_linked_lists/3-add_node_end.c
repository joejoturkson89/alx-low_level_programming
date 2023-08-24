#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: first node of the linked list
 * @str: new string to be added at the end of the linked list
 * Return: NULL if it fail/starting address of the linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t str_len = 0;

	if (str == NULL)
		str_len = 0;
	while (str[str_len] != '\0')
		str_len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}
