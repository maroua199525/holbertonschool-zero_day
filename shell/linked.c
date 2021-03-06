#include "shell.h"
/**
 *add_node - print a new node at the beging
 *@head:struct of type list_t;
 *@str: string
 *Return: head
 */
list_t *linked_path(list_t **head, const char *Path)
{
  unsigned int length;
  list_t *new_node;

  path = getenv("PATH");
  new_node = malloc(sizeof(list_t));
  if (new_node == NULL)
    return (NULL);

  token = strtok(path, ":");
  if (*head == NULL)
    return (NULL);
  while (*head != NULL)
  { 
    while (token != '\0')
      { 
    new_node->path = _strdup(token);
    new_node->next = *head;
    *head = new_node;
  }
  return (*head);
}
