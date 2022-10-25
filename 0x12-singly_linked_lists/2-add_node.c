#include "lists.h"
/**
 * add_node - function adds a new node at the beginnin of a list
 * @head: the head of the linked list
 * @str: the string to store the list in
 * Return: returns the addresss of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizef(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;

	new->next = *head;

	*head = new;

	return (*head);
}
