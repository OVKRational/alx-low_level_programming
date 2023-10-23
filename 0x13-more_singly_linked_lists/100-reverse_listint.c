#include "lists.h"

/**
* reverse_listint - reverses a linked list
* @head: pointer to the first node in the list
*
* Return: pointer to the first node in the new list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *nex = NULL;

while (*head)
{
nex = (*head)->nex;
(*head)->nex = prev;
prev = *head;
*head = nex;
}

*head = prev;

return (*head);
}
